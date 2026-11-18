#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/FNINLLPJNKK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueTuple_2.h"

class JOPCOBDEFGN;
namespace PipelineCamera { template <typename T> class CircularBuffer_1; }
namespace System { class String; }

#define MCEECPBAAHB_BFNNPAKHKNO_OFFSET UNITYSDK_OFFSET(0x1779CD90)
#define MCEECPBAAHB_DKCCELBNBLM_1_OFFSET UNITYSDK_OFFSET(0x1779E140)
#define MCEECPBAAHB_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x1779DCE0)
#define MCEECPBAAHB_EDANDHCJOGC_OFFSET UNITYSDK_OFFSET(0x1779EB60)
#define MCEECPBAAHB_ENADCIEBIBL_OFFSET UNITYSDK_OFFSET(0x1779CE10)
#define MCEECPBAAHB_MDIPNKEDAHP_OFFSET UNITYSDK_OFFSET(0x1779E5A0)
#define MCEECPBAAHB_NCHIECGLAKF_OFFSET UNITYSDK_OFFSET(0x1779E660)
#define MCEECPBAAHB_NDJEKEJKPLF_OFFSET UNITYSDK_OFFSET(0x1779DC70)
#define MCEECPBAAHB_OOPACLECCII_1_OFFSET UNITYSDK_OFFSET(0x1779EBF0)
#define MCEECPBAAHB_OOPACLECCII_OFFSET UNITYSDK_OFFSET(0x1779EAE0)
#define MCEECPBAAHB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1779E590)
#define MCEECPBAAHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1779E540)

inline static constexpr unsigned int MCEECPBAAHB_TypeDefinitionIndex = 58027;

class MCEECPBAAHB : public ::System::Object
{
public:
	static ::UnityEngine::Color32* StaticGet_NPJKDGBEJEI()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(MCEECPBAAHB_TypeDefinitionIndex)->GetStaticField(0xEF80);
	}
	::PipelineCamera::CircularBuffer_1<::System::Object*>* EJBNGAHODJJ; // 0x10
	::System::Single KKJKPJEGKJC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEECPBAAHB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCEECPBAAHB__CCTOR_OFFSET))();
	}

	::System::Void BFNNPAKHKNO(::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCEECPBAAHB_BFNNPAKHKNO_OFFSET))(this, MDPPNMIPDMP);
	}

	::System::Void ENADCIEBIBL(::JOPCOBDEFGN* LLOIGKNKHAH, ::System::Int32 LBPIPEAKPDG, ::System::Single BFPDDMILKBF, ::System::Single MDPPNMIPDMP, ::System::Single EFEODALHHOI, ::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Single>> OKPOHIHEJEE)
	{
		return ((::System::Void(*)(::PVOID, ::JOPCOBDEFGN*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Single>>))((::PBYTE)hIl2Cpp + MCEECPBAAHB_ENADCIEBIBL_OFFSET))(this, LLOIGKNKHAH, LBPIPEAKPDG, BFPDDMILKBF, MDPPNMIPDMP, EFEODALHHOI, OKPOHIHEJEE);
	}

	::System::Single NDJEKEJKPLF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEECPBAAHB_NDJEKEJKPLF_OFFSET))(this);
	}

	::System::Void DKCCELBNBLM(::System::Single& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MCEECPBAAHB_DKCCELBNBLM_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void DKCCELBNBLM_1(::System::Single BEKLCLFIDKF, ::System::Single& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + MCEECPBAAHB_DKCCELBNBLM_1_OFFSET))(this, BEKLCLFIDKF, LJBPECKCCEA);
	}

	static ::System::String* MDIPNKEDAHP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + MCEECPBAAHB_MDIPNKEDAHP_OFFSET))(EGEGIMGMJHN);
	}

	::System::Int32 NCHIECGLAKF(::System::Span_1_9011FAD97750D224<::FNINLLPJNKK> IGAAKDOIPNN, ::System::Single BFPDDMILKBF, ::System::Single CDMKODJJBKH, ::System::Single& FBCNNPLFAAG, ::System::Single& GOKEGHENOGP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::FNINLLPJNKK>, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MCEECPBAAHB_NCHIECGLAKF_OFFSET))(this, IGAAKDOIPNN, BFPDDMILKBF, CDMKODJJBKH, FBCNNPLFAAG, GOKEGHENOGP);
	}

	::System::Void OOPACLECCII(::System::Single& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MCEECPBAAHB_OOPACLECCII_OFFSET))(this, LJBPECKCCEA);
	}

	static ::System::Void EDANDHCJOGC(::System::Single& FBCNNPLFAAG, ::System::Single& GOKEGHENOGP)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MCEECPBAAHB_EDANDHCJOGC_OFFSET))(FBCNNPLFAAG, GOKEGHENOGP);
	}

	::System::Void OOPACLECCII_1(::System::Single BEKLCLFIDKF, ::System::Single& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + MCEECPBAAHB_OOPACLECCII_1_OFFSET))(this, BEKLCLFIDKF, LJBPECKCCEA);
	}
};
