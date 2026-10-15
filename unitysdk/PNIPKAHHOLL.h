#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBGJFNCHEJO;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNIPKAHHOLL_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xC331FC0)
#define PNIPKAHHOLL_ABOMEAHIEFN_1_OFFSET UNITYSDK_OFFSET(0xC3322A0)
#define PNIPKAHHOLL_ABOMEAHIEFN_OFFSET UNITYSDK_OFFSET(0xC3321A0)
#define PNIPKAHHOLL_AOAHNKEFJAA_OFFSET UNITYSDK_OFFSET(0xC331C50)
#define PNIPKAHHOLL_CLEAR_OFFSET UNITYSDK_OFFSET(0xC331CB0)
#define PNIPKAHHOLL_CTOR_OFFSET UNITYSDK_OFFSET(0xC3325D0)
#define PNIPKAHHOLL_DPFOBNBJEJK_OFFSET UNITYSDK_OFFSET(0xC3320D0)
#define PNIPKAHHOLL_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xC331E50)
#define PNIPKAHHOLL_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0xC331BE0)
#define PNIPKAHHOLL_HADGAGKJBHG_OFFSET UNITYSDK_OFFSET(0xC332490)
#define PNIPKAHHOLL_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xC331D00)
#define PNIPKAHHOLL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC331E00)
#define PNIPKAHHOLL_MAFHGBDOKPO_OFFSET UNITYSDK_OFFSET(0xC331C40)

inline static constexpr unsigned int PNIPKAHHOLL_TypeDefinitionIndex = 60778;

	class PNIPKAHHOLL : public ::System::Object
	{
	public:
		::PBGJFNCHEJO* PILDFLBIFJN; // 0x10
		::System::Collections::Generic::List_1<::PBGJFNCHEJO*>* FMBHLKBLNIA; // 0x18
		::RPG::GameCore::GameEntity* HKNKBIKLCFB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_CTOR_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_GNNPFBBMFLA_OFFSET))(this);
		}

		::PBGJFNCHEJO* MAFHGBDOKPO()
		{
			return ((::PBGJFNCHEJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_MAFHGBDOKPO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AOAHNKEFJAA()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_AOAHNKEFJAA_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_JKCPLEJCBML_OFFSET))(this);
		}

		::PBGJFNCHEJO* EGFCFCBHJJP(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::System::Action* a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::PBGJFNCHEJO*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_EGFCFCBHJJP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AALCFBOGFKP(::PBGJFNCHEJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGJFNCHEJO*))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::PBGJFNCHEJO* DPFOBNBJEJK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::PBGJFNCHEJO*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_DPFOBNBJEJK_OFFSET))(this, a1);
		}

		::System::Void ABOMEAHIEFN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_ABOMEAHIEFN_OFFSET))(this, a1);
		}

		::System::Void ABOMEAHIEFN_1(::PBGJFNCHEJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGJFNCHEJO*))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_ABOMEAHIEFN_1_OFFSET))(this, a1);
		}

		::System::Void HADGAGKJBHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPKAHHOLL_HADGAGKJBHG_OFFSET))(this);
		}

	};
