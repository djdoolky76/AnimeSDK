#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIDMPBAABII_TrackPlayingState.h"
#include "unitysdk/System/Object.h"
class GFIMNLJALNN;
class MIDAKCNMMPF;

#define DIDMPBAABII_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9FC100)
#define DIDMPBAABII_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FC1D0)
#define DIDMPBAABII_NCPODAMBBHK_OFFSET UNITYSDK_OFFSET(0x1C9FC180)

inline static constexpr unsigned int DIDMPBAABII_TypeDefinitionIndex = 43400;

	class DIDMPBAABII : public ::System::Object
	{
	public:
		::MIDAKCNMMPF* CIBMFKKGFGN; // 0x10
		::GFIMNLJALNN* PFLDGLBGPDC; // 0x18
		::System::Int32 JBIFBLMDAMG; // 0x20
		::System::Int32 LAINCNBEMPF; // 0x24
		::System::Double GAFENHHEBPG; // 0x28
		::DIDMPBAABII_TrackPlayingState ONLDOAJIGMI; // 0x30
		::System::Int32 DOACJFLCILA; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDMPBAABII_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDMPBAABII_CLEAR_OFFSET))(this);
		}

		::System::Void NCPODAMBBHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDMPBAABII_NCPODAMBBHK_OFFSET))(this);
		}

	};
