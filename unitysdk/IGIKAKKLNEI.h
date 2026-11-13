#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BOGCBDLBHFK;
class CHBMLEKKNPE;
class KPADJMGLFJG;
class LOCJFBNILGD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IGIKAKKLNEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC350B0)

inline static constexpr unsigned int IGIKAKKLNEI_TypeDefinitionIndex = 43434;

	class IGIKAKKLNEI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BOGCBDLBHFK*>* PPGHMFNPLFH; // 0x10
		::System::Collections::Generic::List_1<::KPADJMGLFJG*>* CBNHOLBDNAC; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BOGCBDLBHFK*>* HANNOJCOODO; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BHPEMDNBPOA; // 0x28
		::System::String* EADCDAIMHOE; // 0x30
		::CHBMLEKKNPE* OOPAADGKOLC; // 0x38
		::LOCJFBNILGD* FMJPMFEDIJL; // 0x40
		::UnityEngine::Vector3 KHOECFJFKIB; // 0x48
		::System::Boolean PJFHGBHJJHD; // 0x54
		::System::Boolean PDNMCCBLBJC; // 0x55
		::System::Boolean NJJINHLOGDC; // 0x56
		::System::Boolean IIDHHGEICBB; // 0x57
		::UnityEngine::Vector3 IHPMANOLDPN; // 0x58
		::UnityEngine::Vector3 IJPLNPNAMBJ; // 0x64
		::RPG::Client::LittleGame::TRFPhase PPOIJHJIMLL; // 0x70
		::System::Boolean ILPPPAEPMJL; // 0x74
		::System::Boolean AOOMOICGCHH; // 0x75
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector2 FLBFJPBLOEG; // 0x78
		::UnityEngine::Vector2 DMCFFLEBAKI; // 0x80
		::System::UInt32 FIHNECFFFIC; // 0x88
		::System::Single HLCCFLFKBGL; // 0x8C
		::System::Single EBDMPMAPMOB; // 0x90
		::System::UInt32 NBNFEFOKGEC; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIKAKKLNEI_CTOR_OFFSET))(this);
		}

	};
