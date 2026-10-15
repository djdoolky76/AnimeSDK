#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHOEALGPJGB_FDFFFODBEDG;
namespace UnityEngine { class Object; }

#define JHOEALGPJGB_FDFFFODBEDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC79BD0)
#define JHOEALGPJGB_FDFFFODBEDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC79BC0)
#define JHOEALGPJGB_FDFFFODBEDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EC79B10)
#define JHOEALGPJGB_FDFFFODBEDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EC79B70)

inline static constexpr unsigned int JHOEALGPJGB_FDFFFODBEDG_TypeDefinitionIndex = 44113;

	class JHOEALGPJGB_FDFFFODBEDG : public ::System::Object
	{
	public:
		static ::JHOEALGPJGB_FDFFFODBEDG** StaticGet_FMJPMFEDIJL()
		{
			return (::JHOEALGPJGB_FDFFFODBEDG**)UnitySDK::FromName("", "FDFFFODBEDG")->GetStaticField(0x4CA40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOEALGPJGB_FDFFFODBEDG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHOEALGPJGB_FDFFFODBEDG_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + JHOEALGPJGB_FDFFFODBEDG_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + JHOEALGPJGB_FDFFFODBEDG_GETHASHCODE_OFFSET))(this, a1);
		}

	};
