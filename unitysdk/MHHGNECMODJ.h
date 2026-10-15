#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMNBIGCFJJB;
class CONGPILMBPA;
class EDJNAGDJEKB;
class MIADGHGEBPJ;
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHHGNECMODJ_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xB9333C0)
#define MHHGNECMODJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB934DE0)
#define MHHGNECMODJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB931F90)
#define MHHGNECMODJ_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xB933860)
#define MHHGNECMODJ_FNGOKAKDODG_OFFSET UNITYSDK_OFFSET(0xB932BB0)
#define MHHGNECMODJ_HOJLLACKALC_OFFSET UNITYSDK_OFFSET(0xB933540)
#define MHHGNECMODJ_IAINDOMHOFL_OFFSET UNITYSDK_OFFSET(0xB933E80)
#define MHHGNECMODJ_JPAGMGFGIBF_OFFSET UNITYSDK_OFFSET(0xB933490)
#define MHHGNECMODJ_KHKIMNGBNBG_OFFSET UNITYSDK_OFFSET(0xB9342B0)
#define MHHGNECMODJ_KINBCDEIBPP_OFFSET UNITYSDK_OFFSET(0xB934DA0)
#define MHHGNECMODJ_LADJBIHDOLP_OFFSET UNITYSDK_OFFSET(0xB934160)
#define MHHGNECMODJ_LDPNBEGMBJL_OFFSET UNITYSDK_OFFSET(0xB932A50)
#define MHHGNECMODJ_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB931D00)
#define MHHGNECMODJ_NFODBDONHGD_OFFSET UNITYSDK_OFFSET(0xB934430)
#define MHHGNECMODJ_OOENBABOOMK_OFFSET UNITYSDK_OFFSET(0xB933730)
#define MHHGNECMODJ_TICK_OFFSET UNITYSDK_OFFSET(0xB932430)

inline static constexpr unsigned int MHHGNECMODJ_TypeDefinitionIndex = 57445;

	class MHHGNECMODJ : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::EDJNAGDJEKB* CNHABEECCPK; // 0x18
		::RPG::Client::MockAnimator* CBPLANOPAPP; // 0x20
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28
		::System::Collections::Generic::List_1<::MIADGHGEBPJ*>* DHPAOHJEONB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHGNECMODJ_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHGNECMODJ_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHGNECMODJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MHHGNECMODJ_TICK_OFFSET))(this, a1);
		}

		::System::Void LDPNBEGMBJL(::System::String* a1, ::System::Single a2, ::CONGPILMBPA* a3, ::Il2CppArray<::BMNBIGCFJJB*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::CONGPILMBPA*, ::Il2CppArray<::BMNBIGCFJJB*>*))((::PBYTE)hIl2Cpp + MHHGNECMODJ_LDPNBEGMBJL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AALCFBOGFKP(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MHHGNECMODJ_AALCFBOGFKP_OFFSET))(this, a1, a2);
		}

		::System::Void OOENBABOOMK(::System::String* a1, ::System::UInt32 a2, ::RPG::GameCore::PlayNPCBubbleTalk* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + MHHGNECMODJ_OOENBABOOMK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DKKJNPPHDPM(::System::String* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MHHGNECMODJ_DKKJNPPHDPM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IAINDOMHOFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHHGNECMODJ_IAINDOMHOFL_OFFSET))(this, a1);
		}

		::MIADGHGEBPJ* FNGOKAKDODG(::System::String* a1, ::System::Single a2)
		{
			return ((::MIADGHGEBPJ*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MHHGNECMODJ_FNGOKAKDODG_OFFSET))(this, a1, a2);
		}

		::System::Void JPAGMGFGIBF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MHHGNECMODJ_JPAGMGFGIBF_OFFSET))(this, a1);
		}

		::MIADGHGEBPJ* HOJLLACKALC(::System::String* a1)
		{
			return ((::MIADGHGEBPJ*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MHHGNECMODJ_HOJLLACKALC_OFFSET))(this, a1);
		}

		::System::Void LADJBIHDOLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHGNECMODJ_LADJBIHDOLP_OFFSET))(this);
		}

		::System::Void KHKIMNGBNBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHGNECMODJ_KHKIMNGBNBG_OFFSET))(this);
		}

		::System::Void NFODBDONHGD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MHHGNECMODJ_NFODBDONHGD_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MockAnimator* KINBCDEIBPP()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHGNECMODJ_KINBCDEIBPP_OFFSET))(this);
		}

	};
