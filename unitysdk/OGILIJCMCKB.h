#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOccupyType.h"
#include "unitysdk/RPG/GameCore/TRFCubeType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OGILIJCMCKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4EDB0)

inline static constexpr unsigned int OGILIJCMCKB_TypeDefinitionIndex = 43427;

	class OGILIJCMCKB : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* GJLHEEOPDLK; // 0x10
		::RPG::Client::LittleGame::TRFOccupyType BIMECHCKKFA; // 0x18
		::RPG::GameCore::TRFCubeType DOELLHMOEED; // 0x1C
		::System::Int32 ENGJKOLALOB; // 0x20
		::System::Int32 OMADOHLFMHP; // 0x24
		::System::Boolean HMAIEJIODHO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGILIJCMCKB_CTOR_OFFSET))(this);
		}

	};
