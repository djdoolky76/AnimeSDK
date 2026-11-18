#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMDAEPNIIEE.h"
#include "unitysdk/POMBBGPOKEI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class ADJCHAEAICK;
class FBAMLABJMKF;
class IKGGCHBOBOD;
class JEPHFHPHAIB;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLBPPLIIPPB_ABHAGEMHGBE_OFFSET UNITYSDK_OFFSET(0x1371E8D0)
#define PLBPPLIIPPB_CINPGCFAJAC_1_OFFSET UNITYSDK_OFFSET(0x1371EDC0)
#define PLBPPLIIPPB_CINPGCFAJAC_OFFSET UNITYSDK_OFFSET(0x1371E680)
#define PLBPPLIIPPB_DDLLKDKIOPC_OFFSET UNITYSDK_OFFSET(0x1371F230)
#define PLBPPLIIPPB_DNCAHPEBEMI_OFFSET UNITYSDK_OFFSET(0x1371E3F0)

inline static constexpr unsigned int PLBPPLIIPPB_TypeDefinitionIndex = 67147;

class PLBPPLIIPPB : public ::System::Object
{
public:
	static ::System::Boolean DNCAHPEBEMI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLBPPLIIPPB_DNCAHPEBEMI_OFFSET))();
	}

	static ::System::Boolean CINPGCFAJAC(::ADJCHAEAICK* LANHFEOGAGC, ::FBAMLABJMKF* IHHHIDMPIFD, ::GMDAEPNIIEE DKOFFFNEFJC, ::System::Boolean CKPDHEIDDMH, ::BMBMBLDFBID& ELHIOCAPDBO)
	{
		return ((::System::Boolean(*)(::ADJCHAEAICK*, ::FBAMLABJMKF*, ::GMDAEPNIIEE, ::System::Boolean, ::BMBMBLDFBID&))((::PBYTE)hIl2Cpp + PLBPPLIIPPB_CINPGCFAJAC_OFFSET))(LANHFEOGAGC, IHHHIDMPIFD, DKOFFFNEFJC, CKPDHEIDDMH, ELHIOCAPDBO);
	}

	static ::System::Boolean ABHAGEMHGBE(::GMDAEPNIIEE DKOFFFNEFJC, ::MoleMole::UIHollowChessboard3DModelController* MJMGDGPDCFN, ::FBAMLABJMKF* IHHHIDMPIFD, ::JEPHFHPHAIB* IJEGAGBCCKK, ::IKGGCHBOBOD* BFJENPDEIBK, ::BMBMBLDFBID& ELHIOCAPDBO)
	{
		return ((::System::Boolean(*)(::GMDAEPNIIEE, ::MoleMole::UIHollowChessboard3DModelController*, ::FBAMLABJMKF*, ::JEPHFHPHAIB*, ::IKGGCHBOBOD*, ::BMBMBLDFBID&))((::PBYTE)hIl2Cpp + PLBPPLIIPPB_ABHAGEMHGBE_OFFSET))(DKOFFFNEFJC, MJMGDGPDCFN, IHHHIDMPIFD, IJEGAGBCCKK, BFJENPDEIBK, ELHIOCAPDBO);
	}

	static ::System::Boolean CINPGCFAJAC_1(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::UInt32>* ACNDILFKMLE, ::GMDAEPNIIEE DKOFFFNEFJC, ::System::Boolean CKPDHEIDDMH, ::POMBBGPOKEI FIJLDIFKEHJ, ::System::String* DCLNKIAPKLG, ::BMBMBLDFBID& ELHIOCAPDBO)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::UInt32>*, ::GMDAEPNIIEE, ::System::Boolean, ::POMBBGPOKEI, ::System::String*, ::BMBMBLDFBID&))((::PBYTE)hIl2Cpp + PLBPPLIIPPB_CINPGCFAJAC_1_OFFSET))(ACNDILFKMLE, DKOFFFNEFJC, CKPDHEIDDMH, FIJLDIFKEHJ, DCLNKIAPKLG, ELHIOCAPDBO);
	}

	static ::System::Boolean DDLLKDKIOPC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLBPPLIIPPB_DDLLKDKIOPC_OFFSET))();
	}
};
