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

#define IGIKAKKLNEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB48230)

inline static constexpr unsigned int IGIKAKKLNEI_TypeDefinitionIndex = 42459;

	class IGIKAKKLNEI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KPADJMGLFJG*>* CBNHOLBDNAC; // 0x10
		::System::String* EADCDAIMHOE; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BOGCBDLBHFK*>* HANNOJCOODO; // 0x20
		::System::Collections::Generic::List_1<::BOGCBDLBHFK*>* PPGHMFNPLFH; // 0x28
		::CHBMLEKKNPE* OOPAADGKOLC; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BHPEMDNBPOA; // 0x38
		::LOCJFBNILGD* FMJPMFEDIJL; // 0x40
		::System::UInt32 FIHNECFFFIC; // 0x48
		::System::UInt32 NBNFEFOKGEC; // 0x4C
		::UnityEngine::Vector3 IJPLNPNAMBJ; // 0x50
		::System::Single HLCCFLFKBGL; // 0x5C
		::System::Boolean IIDHHGEICBB; // 0x60
		::System::Boolean PJFHGBHJJHD; // 0x61
		::System::Boolean AOOMOICGCHH; // 0x62
		::System::Boolean ILPPPAEPMJL; // 0x63
		::System::Boolean NJJINHLOGDC; // 0x64
		::System::Boolean PDNMCCBLBJC; // 0x65
		::System::Byte _padding0[0x2];
		::RPG::Client::LittleGame::TRFPhase PPOIJHJIMLL; // 0x68
		::System::Single EBDMPMAPMOB; // 0x6C
		::UnityEngine::Vector3 IHPMANOLDPN; // 0x70
		::UnityEngine::Vector2 FLBFJPBLOEG; // 0x7C
		::UnityEngine::Vector2 DMCFFLEBAKI; // 0x84
		::UnityEngine::Vector3 KHOECFJFKIB; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIKAKKLNEI_CTOR_OFFSET))(this);
		}

	};
