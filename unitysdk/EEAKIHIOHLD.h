#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define EEAKIHIOHLD_CTOR_OFFSET UNITYSDK_OFFSET(0x13348C20)
#define EEAKIHIOHLD_JECFJIDGHEN_OFFSET UNITYSDK_OFFSET(0x13348B60)
#define EEAKIHIOHLD_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x13348900)
#define EEAKIHIOHLD_KKGBACNMDLP_OFFSET UNITYSDK_OFFSET(0x13348A30)
#define EEAKIHIOHLD_LGEFIAGHGBP_OFFSET UNITYSDK_OFFSET(0x13348790)
#define EEAKIHIOHLD_MLGKEAKABPL_OFFSET UNITYSDK_OFFSET(0x133489B0)
#define EEAKIHIOHLD_PGDMFBBGJHG_OFFSET UNITYSDK_OFFSET(0x13348AE0)

inline static constexpr unsigned int EEAKIHIOHLD_TypeDefinitionIndex = 71425;

	class EEAKIHIOHLD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::UnityEngine::GameObject* OIHLFMFFAOB; // 0x68
		::System::String* JEMHPABIGAG; // 0x70
		::System::Int32 JOJFJNOGCJG; // 0x78
		::System::Int32 EHHMPAJHMMC; // 0x7C
		::System::Boolean OGAGNOPLEIH; // 0x80
		::System::Byte _padding0[0x3];
		::System::Int32 JGHEDODJGMC; // 0x84
		::System::Int32 PAKOENKDCEC; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAKIHIOHLD_CTOR_OFFSET))(this);
		}

		::System::Void LGEFIAGHGBP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EEAKIHIOHLD_LGEFIAGHGBP_OFFSET))(this, a1);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEAKIHIOHLD_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void MLGKEAKABPL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EEAKIHIOHLD_MLGKEAKABPL_OFFSET))(this, a1);
		}

		::System::Void KKGBACNMDLP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEAKIHIOHLD_KKGBACNMDLP_OFFSET))(this, a1);
		}

		::System::Void PGDMFBBGJHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAKIHIOHLD_PGDMFBBGJHG_OFFSET))(this);
		}

		::System::Void JECFJIDGHEN(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EEAKIHIOHLD_JECFJIDGHEN_OFFSET))(this, a1);
		}

	};
