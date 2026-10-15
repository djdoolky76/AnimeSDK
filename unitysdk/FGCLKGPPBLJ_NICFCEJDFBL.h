#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define FGCLKGPPBLJ_NICFCEJDFBL_BLPLAFPIJPC_OFFSET UNITYSDK_OFFSET(0x15753400)
#define FGCLKGPPBLJ_NICFCEJDFBL_CTOR_OFFSET UNITYSDK_OFFSET(0x15752F60)
#define FGCLKGPPBLJ_NICFCEJDFBL_FHPHCIOLMGE_OFFSET UNITYSDK_OFFSET(0x15753230)
#define FGCLKGPPBLJ_NICFCEJDFBL_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x157533C0)
#define FGCLKGPPBLJ_NICFCEJDFBL_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15753380)
#define FGCLKGPPBLJ_NICFCEJDFBL_NPIHEJKIHJI_OFFSET UNITYSDK_OFFSET(0x157530D0)

	class FGCLKGPPBLJ_NICFCEJDFBL : public ::System::Object
	{
	public:
		::System::Object* ECEIMLMKIKJ; // 0x10
		::UnityEngine::Object* JKLBAAHFJDJ; // 0x18
		::System::String* GMCNLFICNOB; // 0x20
		::System::String* GIDAEFPOGHI; // 0x28
		::System::Void _ctor(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_NICFCEJDFBL_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* NPIHEJKIHJI(::XLua::LuaTable* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_NICFCEJDFBL_NPIHEJKIHJI_OFFSET))(this, a1);
		}

		::UnityEngine::Color FHPHCIOLMGE()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_NICFCEJDFBL_FHPHCIOLMGE_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_NICFCEJDFBL_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBIOGKPHKKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_NICFCEJDFBL_JBIOGKPHKKC_OFFSET))(this);
		}

		::UnityEngine::Transform* BLPLAFPIJPC()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_NICFCEJDFBL_BLPLAFPIJPC_OFFSET))(this);
		}

	};
