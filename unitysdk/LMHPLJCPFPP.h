#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class HLKPNJNJBPK;
class LJABAMCMDLI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMHPLJCPFPP_CPAHMGKNDOE_OFFSET UNITYSDK_OFFSET(0xB77BF70)
#define LMHPLJCPFPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB77C250)
#define LMHPLJCPFPP_DPBKOKNCBHE_OFFSET UNITYSDK_OFFSET(0xB77BC00)
#define LMHPLJCPFPP_FFJMOKPAHBJ_OFFSET UNITYSDK_OFFSET(0xB77BB10)
#define LMHPLJCPFPP_JANCLFNGMHJ_OFFSET UNITYSDK_OFFSET(0xB77C090)
#define LMHPLJCPFPP_KAAAEJMAFOB_OFFSET UNITYSDK_OFFSET(0xB77BA20)
#define LMHPLJCPFPP_LLJOHJBGEHM_OFFSET UNITYSDK_OFFSET(0xB77BDC0)
#define LMHPLJCPFPP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB77BE70)
#define LMHPLJCPFPP_OONLHNKBHID_OFFSET UNITYSDK_OFFSET(0xB77C200)

inline static constexpr unsigned int LMHPLJCPFPP_TypeDefinitionIndex = 71412;

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
