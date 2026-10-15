#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCCJNGOCLKD;
class PHCOGNHOOJP;
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardPerformViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPJFJOGLHGL_BFEBJFGONMF_OFFSET UNITYSDK_OFFSET(0xC38C2D0)
#define PPJFJOGLHGL_BFLNFMEGCPE_OFFSET UNITYSDK_OFFSET(0xC38C370)
#define PPJFJOGLHGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC38C5C0)
#define PPJFJOGLHGL_GET_CURRENTPERFORMFORTASK_OFFSET UNITYSDK_OFFSET(0xC38C2B0)
#define PPJFJOGLHGL_SET_CURRENTPERFORMFORTASK_OFFSET UNITYSDK_OFFSET(0xC38C2C0)

inline static constexpr unsigned int PPJFJOGLHGL_TypeDefinitionIndex = 80789;

	class PPJFJOGLHGL : public ::System::Object
	{
	public:
		::PHCOGNHOOJP* DLNIGFGLPLJ; // 0x10
		::System::String* NLCHDCHBCAL; // 0x18
		static ::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel** StaticGet__CurrentPerformForTask_k__BackingField()
		{
			return (::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel**)UnitySDK::FromName("", "PPJFJOGLHGL")->GetStaticField(0xD670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJFJOGLHGL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel* get_CurrentPerformForTask()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel*(*)())((::PBYTE)hIl2Cpp + PPJFJOGLHGL_GET_CURRENTPERFORMFORTASK_OFFSET))();
		}

		static ::System::Void set_CurrentPerformForTask(::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel* a1)
		{
			return ((::System::Void(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel*))((::PBYTE)hIl2Cpp + PPJFJOGLHGL_SET_CURRENTPERFORMFORTASK_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* BFEBJFGONMF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJFJOGLHGL_BFEBJFGONMF_OFFSET))(this);
		}

		::System::Void BFLNFMEGCPE(::System::String* a1, ::PCCJNGOCLKD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::PCCJNGOCLKD*))((::PBYTE)hIl2Cpp + PPJFJOGLHGL_BFLNFMEGCPE_OFFSET))(this, a1, a2);
		}

	};
