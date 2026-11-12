#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/MarshalByRefObject.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define XLUA_XLUATYPEINFOGETTERINRELEASE_CHECKTYPEVALID_OFFSET UNITYSDK_OFFSET(0x1630E600)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1630F2D0)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETENUMFIELDS_OFFSET UNITYSDK_OFFSET(0x1630E690)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x1630EFC0)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x1630E9A0)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1630ECB0)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_LOADXLUABUILDASSEMBLIES_OFFSET UNITYSDK_OFFSET(0x1630E420)

namespace XLua
{
	inline static constexpr unsigned int XLuaTypeInfoGetterInRelease_TypeDefinitionIndex = 51330;

	class XLuaTypeInfoGetterInRelease : public ::System::MarshalByRefObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_CTOR_OFFSET))(this);
		}

		::System::Boolean LoadXLuaBuildAssemblies(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_LOADXLUABUILDASSEMBLIES_OFFSET))(this, a1);
		}

		::System::Boolean CheckTypeValid(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_CHECKTYPEVALID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetEnumFields(::System::Type* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETENUMFIELDS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetMethods(::System::Type* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETMETHODS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetProperties(::System::Type* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetFields(::System::Type* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETFIELDS_OFFSET))(this, a1, a2);
		}

	};
}
