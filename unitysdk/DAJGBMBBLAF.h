#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAJGBMBBLAF_PANPNJKGPOI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BIDDFDEAEGB;
namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace System { class String; }

#define DAJGBMBBLAF_CLEAR_OFFSET UNITYSDK_OFFSET(0xDFC4980)
#define DAJGBMBBLAF_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC5030)
#define DAJGBMBBLAF_EKFIEAALOFF_OFFSET UNITYSDK_OFFSET(0xDFC4D30)
#define DAJGBMBBLAF_GLHKHBEABME_OFFSET UNITYSDK_OFFSET(0xDFC45E0)
#define DAJGBMBBLAF_IJEEHJCEENE_OFFSET UNITYSDK_OFFSET(0xDFC4F60)
#define DAJGBMBBLAF_JAIIFBHHBKF_OFFSET UNITYSDK_OFFSET(0xDFC4760)
#define DAJGBMBBLAF_JLFDGAMMMME_OFFSET UNITYSDK_OFFSET(0xDFC4A40)
#define DAJGBMBBLAF_JLPMLLCBPIB_OFFSET UNITYSDK_OFFSET(0xDFC4F10)
#define DAJGBMBBLAF_KFAJPMAOBOO_OFFSET UNITYSDK_OFFSET(0xDFC4EC0)
#define DAJGBMBBLAF_KFKAGAFKKEE_OFFSET UNITYSDK_OFFSET(0xDFC4880)
#define DAJGBMBBLAF_KIPCBNDIEHD_OFFSET UNITYSDK_OFFSET(0xDFC4D80)
#define DAJGBMBBLAF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDFC4520)
#define DAJGBMBBLAF_NPPKPKFIJFJ_OFFSET UNITYSDK_OFFSET(0xDFC4BF0)
#define DAJGBMBBLAF_SETVALUE_OFFSET UNITYSDK_OFFSET(0xDFC4B40)

inline static constexpr unsigned int DAJGBMBBLAF_TypeDefinitionIndex = 76498;

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
