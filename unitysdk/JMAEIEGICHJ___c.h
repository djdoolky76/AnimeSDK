#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMAEIEGICHJ_BHJJNCEJODI;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define JMAEIEGICHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB25A340)
#define JMAEIEGICHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB25A380)
#define JMAEIEGICHJ___C__CALCULATEOFFSETTEXTUREDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0xB25A390)

inline static constexpr unsigned int JMAEIEGICHJ___c_TypeDefinitionIndex = 51847;

	class JMAEIEGICHJ___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D700);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMAEIEGICHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAEIEGICHJ___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CalculateOffsetTextureData_b__6_0(::JMAEIEGICHJ_BHJJNCEJODI* a1, ::JMAEIEGICHJ_BHJJNCEJODI* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::JMAEIEGICHJ_BHJJNCEJODI*, ::JMAEIEGICHJ_BHJJNCEJODI*))((::PBYTE)hIl2Cpp + JMAEIEGICHJ___C__CALCULATEOFFSETTEXTUREDATA_B__6_0_OFFSET))(this, a1, a2);
		}

	};
