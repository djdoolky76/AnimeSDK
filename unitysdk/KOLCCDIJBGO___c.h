#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOLCCDIJBGO;
namespace System { class Object; }

#define KOLCCDIJBGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B3DC0)
#define KOLCCDIJBGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B3E00)
#define KOLCCDIJBGO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8B3E10)

inline static constexpr unsigned int KOLCCDIJBGO___c_TypeDefinitionIndex = 28274;

	class KOLCCDIJBGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOLCCDIJBGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCCDIJBGO___C_CTOR_OFFSET))(this);
		}

		::KOLCCDIJBGO* __cctor_b__28_0()
		{
			return ((::KOLCCDIJBGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCCDIJBGO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
