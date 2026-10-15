#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }

#define NJEIJGJJHPM_BNDGNGNJMNF_OFFSET UNITYSDK_OFFSET(0xBC05570)
#define NJEIJGJJHPM_CJKPFLFCKBI_OFFSET UNITYSDK_OFFSET(0xBC05800)
#define NJEIJGJJHPM_CTOR_OFFSET UNITYSDK_OFFSET(0xBC050E0)
#define NJEIJGJJHPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC05BA0)
#define NJEIJGJJHPM_GNKHAOGCGLL_OFFSET UNITYSDK_OFFSET(0xBC05160)
#define NJEIJGJJHPM_KIOKEOAGPKO_OFFSET UNITYSDK_OFFSET(0xBC05740)
#define NJEIJGJJHPM_KNEMBOFMOKA_OFFSET UNITYSDK_OFFSET(0xBC052F0)
#define NJEIJGJJHPM___SENDSTARTNODEREQ_B__5_0_OFFSET UNITYSDK_OFFSET(0xBC05CE0)

inline static constexpr unsigned int NJEIJGJJHPM_TypeDefinitionIndex = 75139;

	class NJEIJGJJHPM : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::UInt32>* ODJPCGKBDHC; // 0x10
		::RPG::Client::ActivityIdleLive::StoryLine* GIOECPALNAC; // 0x18
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::StoryLine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + NJEIJGJJHPM_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* GNKHAOGCGLL(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + NJEIJGJJHPM_GNKHAOGCGLL_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* BNDGNGNJMNF(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + NJEIJGJJHPM_BNDGNGNJMNF_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* KNEMBOFMOKA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NJEIJGJJHPM_KNEMBOFMOKA_OFFSET))(this, a1, a2);
		}

		::System::Void CJKPFLFCKBI(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + NJEIJGJJHPM_CJKPFLFCKBI_OFFSET))(this, a1, a2);
		}

		::System::Void KIOKEOAGPKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJEIJGJJHPM_KIOKEOAGPKO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIJGJJHPM_DISPOSE_OFFSET))(this);
		}

		::System::Void __SendStartNodeReq_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIJGJJHPM___SENDSTARTNODEREQ_B__5_0_OFFSET))(this);
		}

	};
