#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKBMIHAPJDM.h"
#include "unitysdk/System/ValueTuple_2.h"

class CBDDODKFCIJ;
class EDBDJENIDEO;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBHALHKAKLC_DBLDHGIIDKK_EJKCECMINDA_OFFSET UNITYSDK_OFFSET(0x14F12F80)
#define CBHALHKAKLC_DBLDHGIIDKK_HHHEOMOCCHG_OFFSET UNITYSDK_OFFSET(0x14F132D0)
#define CBHALHKAKLC_DBLDHGIIDKK_LKJDHLCJLJC_OFFSET UNITYSDK_OFFSET(0x14F12F20)
#define CBHALHKAKLC_DBLDHGIIDKK__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F132E0)
#define CBHALHKAKLC_DBLDHGIIDKK__CTOR_OFFSET UNITYSDK_OFFSET(0x14F133B0)

inline static constexpr unsigned int CBHALHKAKLC_DBLDHGIIDKK_TypeDefinitionIndex = 55864;

class CBHALHKAKLC_DBLDHGIIDKK
{
public:
	static ::System::Collections::Generic::Dictionary_2<::AKBMIHAPJDM, ::System::Func_1<::System::ValueTuple_2<::EDBDJENIDEO*, ::CBDDODKFCIJ*>>*>** StaticGet_KKBGHHDPEIK()
	{
		return (::System::Collections::Generic::Dictionary_2<::AKBMIHAPJDM, ::System::Func_1<::System::ValueTuple_2<::EDBDJENIDEO*, ::CBDDODKFCIJ*>>*>**)Il2CppClass::FromTypeDefinitionIndex(CBHALHKAKLC_DBLDHGIIDKK_TypeDefinitionIndex)->GetStaticField(0x310A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBHALHKAKLC_DBLDHGIIDKK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_DBLDHGIIDKK__CTOR_OFFSET))(this);
	}

	::System::Boolean LKJDHLCJLJC(::System::ValueTuple_2<::EDBDJENIDEO*, ::CBDDODKFCIJ*>& CENBECNGPHI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::EDBDJENIDEO*, ::CBDDODKFCIJ*>&))((::PBYTE)hIl2Cpp + CBHALHKAKLC_DBLDHGIIDKK_LKJDHLCJLJC_OFFSET))(this, CENBECNGPHI);
	}

	::System::Int32 HHHEOMOCCHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_DBLDHGIIDKK_HHHEOMOCCHG_OFFSET))(this);
	}

	::System::ValueTuple_2<::EDBDJENIDEO*, ::CBDDODKFCIJ*> EJKCECMINDA()
	{
		return ((::System::ValueTuple_2<::EDBDJENIDEO*, ::CBDDODKFCIJ*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_DBLDHGIIDKK_EJKCECMINDA_OFFSET))(this);
	}
};
