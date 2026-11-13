#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APCCFELCPKH;
class GJCFMFEAEBG;
namespace RPG::Client { class MonoTrainPartyBuildItemDynamicBind; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define APCCFELCPKH_MJFEMPECGGL_CTOR_OFFSET UNITYSDK_OFFSET(0x184FA240)
#define APCCFELCPKH_MJFEMPECGGL_EPECIGGBNKH_OFFSET UNITYSDK_OFFSET(0x184FE1E0)
#define APCCFELCPKH_MJFEMPECGGL_GLHDAJLFMPK_OFFSET UNITYSDK_OFFSET(0x184FA0A0)
#define APCCFELCPKH_MJFEMPECGGL_HLINCKBPLLB_OFFSET UNITYSDK_OFFSET(0x184F8B70)
#define APCCFELCPKH_MJFEMPECGGL_LPFPLLLFMHP_1_OFFSET UNITYSDK_OFFSET(0x184FA130)
#define APCCFELCPKH_MJFEMPECGGL_LPFPLLLFMHP_OFFSET UNITYSDK_OFFSET(0x184FE410)
#define APCCFELCPKH_MJFEMPECGGL_MJNHGNIBIOO_OFFSET UNITYSDK_OFFSET(0x184FDE90)
#define APCCFELCPKH_MJFEMPECGGL_NLOCKOJGJHC_OFFSET UNITYSDK_OFFSET(0x184FD870)

inline static constexpr unsigned int APCCFELCPKH_MJFEMPECGGL_TypeDefinitionIndex = 61521;

	class APCCFELCPKH_MJFEMPECGGL : public ::System::Object
	{
	public:
		::APCCFELCPKH* JIIKAEMELPJ; // 0x10
		::RPG::Client::OpenWorld::StreamingItemData* BGFPGNDIOII; // 0x18
		::System::String* EALNBEBALJM; // 0x20
		::GJCFMFEAEBG* ADMKLAHAHAM; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* DILCJJKMODD; // 0x30
		::UnityEngine::Transform* MIPCILCJBMP; // 0x38
		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* JCGPMBCCANG; // 0x40
		::UnityEngine::MeshRenderer* GFEHCONCNCA; // 0x48
		::RPG::Client::MonoTrainPartyBuildItemDynamicBind* KDFMBHGHGGF; // 0x50
		::System::Boolean MBKEBAGAMPH; // 0x58
		::System::Byte _padding0[0x3];
		::System::UInt32 FMLGGKAFMKC; // 0x5C
		::System::UInt32 CMNOEFFFNPE; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_MJFEMPECGGL_CTOR_OFFSET))(this);
		}

		::System::UInt32 GLHDAJLFMPK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_MJFEMPECGGL_GLHDAJLFMPK_OFFSET))(this);
		}

		::System::Void NLOCKOJGJHC(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + APCCFELCPKH_MJFEMPECGGL_NLOCKOJGJHC_OFFSET))(this, a1, a2);
		}

		::System::Void MJNHGNIBIOO(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + APCCFELCPKH_MJFEMPECGGL_MJNHGNIBIOO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EPECIGGBNKH(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + APCCFELCPKH_MJFEMPECGGL_EPECIGGBNKH_OFFSET))(this, a1, a2);
		}

		::System::Void HLINCKBPLLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_MJFEMPECGGL_HLINCKBPLLB_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> LPFPLLLFMHP()
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_MJFEMPECGGL_LPFPLLLFMHP_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> LPFPLLLFMHP_1(::System::UInt32 a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_MJFEMPECGGL_LPFPLLLFMHP_1_OFFSET))(this, a1);
		}

	};
