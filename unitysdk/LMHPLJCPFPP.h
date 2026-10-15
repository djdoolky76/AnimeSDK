#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class HLKPNJNJBPK;
class LJABAMCMDLI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMHPLJCPFPP_CPAHMGKNDOE_OFFSET UNITYSDK_OFFSET(0xB782820)
#define LMHPLJCPFPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB782B00)
#define LMHPLJCPFPP_DPBKOKNCBHE_OFFSET UNITYSDK_OFFSET(0xB7824B0)
#define LMHPLJCPFPP_FFJMOKPAHBJ_OFFSET UNITYSDK_OFFSET(0xB7823C0)
#define LMHPLJCPFPP_JANCLFNGMHJ_OFFSET UNITYSDK_OFFSET(0xB782940)
#define LMHPLJCPFPP_KAAAEJMAFOB_OFFSET UNITYSDK_OFFSET(0xB7822D0)
#define LMHPLJCPFPP_LLJOHJBGEHM_OFFSET UNITYSDK_OFFSET(0xB782670)
#define LMHPLJCPFPP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB782720)
#define LMHPLJCPFPP_OONLHNKBHID_OFFSET UNITYSDK_OFFSET(0xB782AB0)

inline static constexpr unsigned int LMHPLJCPFPP_TypeDefinitionIndex = 71413;

	class LMHPLJCPFPP : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::HLKPNJNJBPK*>* GANFMEPNBJK; // 0x60
		// static const ::System::String* GHHMIDHPMOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHPLJCPFPP_CTOR_OFFSET))(this);
		}

		::System::Void KAAAEJMAFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHPLJCPFPP_KAAAEJMAFOB_OFFSET))(this);
		}

		::System::Void FFJMOKPAHBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHPLJCPFPP_FFJMOKPAHBJ_OFFSET))(this);
		}

		::System::Void DPBKOKNCBHE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LMHPLJCPFPP_DPBKOKNCBHE_OFFSET))(this, a1, a2);
		}

		::System::Void NKPPGDENJAE(::System::Collections::Generic::List_1<::LJABAMCMDLI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LJABAMCMDLI*>*))((::PBYTE)hIl2Cpp + LMHPLJCPFPP_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void CPAHMGKNDOE(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LMHPLJCPFPP_CPAHMGKNDOE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JANCLFNGMHJ(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LMHPLJCPFPP_JANCLFNGMHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LLJOHJBGEHM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMHPLJCPFPP_LLJOHJBGEHM_OFFSET))(this, a1);
		}

		::System::Int32 OONLHNKBHID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMHPLJCPFPP_OONLHNKBHID_OFFSET))(this, a1);
		}

	};
