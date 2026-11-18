#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class Module; }

#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1D4236C0)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1D423730)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1D423740)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1D4237D0)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1D423900)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1D423910)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1D423920)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1D4236D0)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1D4236E0)

namespace System::Reflection
{
	inline static constexpr unsigned int MemberInfo_TypeDefinitionIndex = 545;

	class MemberInfo : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_0_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>* Method_5_5()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_5_5_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_9_9()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_9_9_OFFSET))(this);
		}

		::System::Int32 Method_10_10()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_10_10_OFFSET))(this);
		}

		::System::Reflection::Module* Method_11_11()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_11_11_OFFSET))(this);
		}

		static ::System::Boolean Method_12_12(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_12_12_OFFSET))(left, right);
		}

		static ::System::Boolean Method_13_13(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_13_13_OFFSET))(left, right);
		}

		::System::Boolean Method_14_14(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_14_14_OFFSET))(this, obj);
		}

		::System::Int32 Method_15_15()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_15_15_OFFSET))(this);
		}
	};
}
