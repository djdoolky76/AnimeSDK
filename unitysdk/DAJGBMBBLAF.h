#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAJGBMBBLAF_PANPNJKGPOI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BIDDFDEAEGB;
namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace System { class String; }

#define DAJGBMBBLAF_CLEAR_OFFSET UNITYSDK_OFFSET(0xE928010)
#define DAJGBMBBLAF_CTOR_OFFSET UNITYSDK_OFFSET(0xE9286C0)
#define DAJGBMBBLAF_EKFIEAALOFF_OFFSET UNITYSDK_OFFSET(0xE9283C0)
#define DAJGBMBBLAF_GLHKHBEABME_OFFSET UNITYSDK_OFFSET(0xE927C70)
#define DAJGBMBBLAF_IJEEHJCEENE_OFFSET UNITYSDK_OFFSET(0xE9285F0)
#define DAJGBMBBLAF_JAIIFBHHBKF_OFFSET UNITYSDK_OFFSET(0xE927DF0)
#define DAJGBMBBLAF_JLFDGAMMMME_OFFSET UNITYSDK_OFFSET(0xE9280D0)
#define DAJGBMBBLAF_JLPMLLCBPIB_OFFSET UNITYSDK_OFFSET(0xE9285A0)
#define DAJGBMBBLAF_KFAJPMAOBOO_OFFSET UNITYSDK_OFFSET(0xE928550)
#define DAJGBMBBLAF_KFKAGAFKKEE_OFFSET UNITYSDK_OFFSET(0xE927F10)
#define DAJGBMBBLAF_KIPCBNDIEHD_OFFSET UNITYSDK_OFFSET(0xE928410)
#define DAJGBMBBLAF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE927BB0)
#define DAJGBMBBLAF_NPPKPKFIJFJ_OFFSET UNITYSDK_OFFSET(0xE928280)
#define DAJGBMBBLAF_SETVALUE_OFFSET UNITYSDK_OFFSET(0xE9281D0)

inline static constexpr unsigned int DAJGBMBBLAF_TypeDefinitionIndex = 78829;

	class DAJGBMBBLAF
	{
	public:
		::DAJGBMBBLAF_PANPNJKGPOI OAPHOIGBLAK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LittleGameLevelVariable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void GLHKHBEABME(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_GLHKHBEABME_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_CLEAR_OFFSET))(this);
		}

		::System::Void SetValue(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_SETVALUE_OFFSET))(this, a1);
		}

		::System::Void EKFIEAALOFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_EKFIEAALOFF_OFFSET))(this);
		}

		::System::Void KFAJPMAOBOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_KFAJPMAOBOO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint JLPMLLCBPIB()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_JLPMLLCBPIB_OFFSET))(this);
		}

		::System::Void NPPKPKFIJFJ(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_NPPKPKFIJFJ_OFFSET))(this, a1);
		}

		::System::Void KIPCBNDIEHD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_KIPCBNDIEHD_OFFSET))(this, a1);
		}

		::BIDDFDEAEGB* JAIIFBHHBKF(::System::Boolean a1)
		{
			return ((::BIDDFDEAEGB*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_JAIIFBHHBKF_OFFSET))(this, a1);
		}

		::System::Void KFKAGAFKKEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_KFKAGAFKKEE_OFFSET))(this);
		}

		::System::Void JLFDGAMMMME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_JLFDGAMMMME_OFFSET))(this);
		}

		::System::Void IJEEHJCEENE(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + DAJGBMBBLAF_IJEEHJCEENE_OFFSET))(this, a1, a2);
		}

	};
