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

#define IGIKAKKLNEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB76560)

inline static constexpr unsigned int IGIKAKKLNEI_TypeDefinitionIndex = 42459;

	class IGIKAKKLNEI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BOGCBDLBHFK*>* PPGHMFNPLFH; // 0x10
		::System::String* EADCDAIMHOE; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BHPEMDNBPOA; // 0x20
		::System::Collections::Generic::List_1<::KPADJMGLFJG*>* CBNHOLBDNAC; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BOGCBDLBHFK*>* HANNOJCOODO; // 0x30
		::LOCJFBNILGD* FMJPMFEDIJL; // 0x38
		::CHBMLEKKNPE* OOPAADGKOLC; // 0x40
		::System::Boolean NJJINHLOGDC; // 0x48
		::System::Boolean PDNMCCBLBJC; // 0x49
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 KHOECFJFKIB; // 0x4C
		::System::Single EBDMPMAPMOB; // 0x58
		::UnityEngine::Vector2 DMCFFLEBAKI; // 0x5C
		::System::Boolean ILPPPAEPMJL; // 0x64
		::System::Boolean AOOMOICGCHH; // 0x65
		::System::Boolean PJFHGBHJJHD; // 0x66
		::System::Boolean IIDHHGEICBB; // 0x67
		::System::Single HLCCFLFKBGL; // 0x68
		::UnityEngine::Vector2 FLBFJPBLOEG; // 0x6C
		::UnityEngine::Vector3 IJPLNPNAMBJ; // 0x74
		::System::UInt32 NBNFEFOKGEC; // 0x80
		::System::UInt32 FIHNECFFFIC; // 0x84
		::RPG::Client::LittleGame::TRFPhase PPOIJHJIMLL; // 0x88
		::UnityEngine::Vector3 IHPMANOLDPN; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIKAKKLNEI_CTOR_OFFSET))(this);
		}

	};
