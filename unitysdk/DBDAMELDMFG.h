#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DBDAMELDMFG_AADEGOFEPCF_OFFSET UNITYSDK_OFFSET(0x388A60)
#define DBDAMELDMFG_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x282350)
#define DBDAMELDMFG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6CDF30)
#define DBDAMELDMFG_JPPEEOLOGGP_1_OFFSET UNITYSDK_OFFSET(0x1205C3D0)
#define DBDAMELDMFG_JPPEEOLOGGP_2_OFFSET UNITYSDK_OFFSET(0x1205C440)
#define DBDAMELDMFG_JPPEEOLOGGP_3_OFFSET UNITYSDK_OFFSET(0x1205C4B0)
#define DBDAMELDMFG_JPPEEOLOGGP_4_OFFSET UNITYSDK_OFFSET(0x1205C610)
#define DBDAMELDMFG_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x1205C2A0)
#define DBDAMELDMFG_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x358B00)
#define DBDAMELDMFG_LBCLKFCPJCE_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DBDAMELDMFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6CDF20)
#define DBDAMELDMFG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6CDF00)
#define DBDAMELDMFG__CTOR_OFFSET UNITYSDK_OFFSET(0x3D5420)

inline static constexpr unsigned int DBDAMELDMFG_TypeDefinitionIndex = 70769;

struct alignas(8) DBDAMELDMFG
{
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* _EFPHGNGOAJP_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DBDAMELDMFG__CTOR_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::String*>* DJGONKEIBAG)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + DBDAMELDMFG__CTOR_1_OFFSET))(this, DJGONKEIBAG);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDAMELDMFG_TOSTRING_OFFSET))(this);
	}

	/*
	static ::DBDAMELDMFG JPPEEOLOGGP(::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*> HIAIKHDFCLN)
	{
		return ((::DBDAMELDMFG(*)(::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + DBDAMELDMFG_JPPEEOLOGGP_OFFSET))(HIAIKHDFCLN);
	}
	*/

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DBDAMELDMFG_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::DBDAMELDMFG JPPEEOLOGGP_1(::Il2CppArray<::System::String*>* DJGONKEIBAG)
	{
		return ((::DBDAMELDMFG(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + DBDAMELDMFG_JPPEEOLOGGP_1_OFFSET))(DJGONKEIBAG);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDAMELDMFG_DECMGICKDLH_OFFSET))(this);
	}

	/*
	static ::DBDAMELDMFG JPPEEOLOGGP_2(::System::String* HIAIKHDFCLN)
	{
		return ((::DBDAMELDMFG(*)(::System::String*))((::PBYTE)hIl2Cpp + DBDAMELDMFG_JPPEEOLOGGP_2_OFFSET))(HIAIKHDFCLN);
	}
	*/

	::System::Void AADEGOFEPCF(::System::Collections::Generic::IReadOnlyList_1<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + DBDAMELDMFG_AADEGOFEPCF_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::DBDAMELDMFG JPPEEOLOGGP_3(::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::System::String*> HIAIKHDFCLN)
	{
		return ((::DBDAMELDMFG(*)(::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + DBDAMELDMFG_JPPEEOLOGGP_3_OFFSET))(HIAIKHDFCLN);
	}
	*/

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* LBCLKFCPJCE()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDAMELDMFG_LBCLKFCPJCE_OFFSET))(this);
	}

	/*
	static ::DBDAMELDMFG JPPEEOLOGGP_4(::System::ValueTuple_2<::System::String*, ::System::String*> HIAIKHDFCLN)
	{
		return ((::DBDAMELDMFG(*)(::System::ValueTuple_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + DBDAMELDMFG_JPPEEOLOGGP_4_OFFSET))(HIAIKHDFCLN);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDAMELDMFG_DPIHOJBBGLA_OFFSET))(this);
	}
};
