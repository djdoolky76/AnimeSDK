#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BCFAKEGJPKN;
class INKNLLODDHF;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define PDMBLCALNPD_ADD_HANDLEHINTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xC925920)
#define PDMBLCALNPD_AEGINLEIHGO_OFFSET UNITYSDK_OFFSET(0xC9274F0)
#define PDMBLCALNPD_BJLPGHIJFHJ_OFFSET UNITYSDK_OFFSET(0xC9257A0)
#define PDMBLCALNPD_CTOR_OFFSET UNITYSDK_OFFSET(0xC925A20)
#define PDMBLCALNPD_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xC925C40)
#define PDMBLCALNPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC926F10)
#define PDMBLCALNPD_FLJGDPKBCBB_OFFSET UNITYSDK_OFFSET(0xC927550)
#define PDMBLCALNPD_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xC925780)
#define PDMBLCALNPD_GET_CUSTOMERACTOR_OFFSET UNITYSDK_OFFSET(0xC925760)
#define PDMBLCALNPD_GET_HINTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xC925900)
#define PDMBLCALNPD_IILPELEMOJI_OFFSET UNITYSDK_OFFSET(0xC9261E0)
#define PDMBLCALNPD_OAJFEAHMMOK_OFFSET UNITYSDK_OFFSET(0xC9259E0)
#define PDMBLCALNPD_REMOVE_HANDLEHINTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xC925980)
#define PDMBLCALNPD_SET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xC925790)
#define PDMBLCALNPD_SET_CUSTOMERACTOR_OFFSET UNITYSDK_OFFSET(0xC925770)
#define PDMBLCALNPD_SET_HINTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xC925910)
#define PDMBLCALNPD___CTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0xC9275A0)

inline static constexpr unsigned int PDMBLCALNPD_TypeDefinitionIndex = 82351;

	class PDMBLCALNPD : public ::System::Object
	{
	public:
		::BCFAKEGJPKN* _CustomerActor_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::INKNLLODDHF*>* _Constraints_k__BackingField; // 0x18
		::R3::ReactiveProperty_1<::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>*>* EMMGFCKKBPK; // 0x20
		::System::IDisposable* KGHNOJBDPIM; // 0x28
		::System::Action* HandleHintCanSubmit; // 0x30
		::System::Boolean BKNBBJPLPHO; // 0x38
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID _HintCanSubmit_k__BackingField; // 0x40
		::System::Void _ctor(::R3::Observable_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::Observable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PDMBLCALNPD_CTOR_OFFSET))(this, a1);
		}

		::BCFAKEGJPKN* get_CustomerActor()
		{
			return ((::BCFAKEGJPKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMBLCALNPD_GET_CUSTOMERACTOR_OFFSET))(this);
		}

		::System::Void set_CustomerActor(::BCFAKEGJPKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCFAKEGJPKN*))((::PBYTE)hIl2Cpp + PDMBLCALNPD_SET_CUSTOMERACTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::INKNLLODDHF*>* get_Constraints()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::INKNLLODDHF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMBLCALNPD_GET_CONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_Constraints(::System::Collections::Generic::IReadOnlyList_1<::INKNLLODDHF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::INKNLLODDHF*>*))((::PBYTE)hIl2Cpp + PDMBLCALNPD_SET_CONSTRAINTS_OFFSET))(this, a1);
		}

		::System::Boolean BJLPGHIJFHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMBLCALNPD_BJLPGHIJFHJ_OFFSET))(this);
		}

		::RPG::Client::TextID get_HintCanSubmit()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMBLCALNPD_GET_HINTCANSUBMIT_OFFSET))(this);
		}

		::System::Void set_HintCanSubmit(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + PDMBLCALNPD_SET_HINTCANSUBMIT_OFFSET))(this, a1);
		}

		::System::Void add_HandleHintCanSubmit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PDMBLCALNPD_ADD_HANDLEHINTCANSUBMIT_OFFSET))(this, a1);
		}

		::System::Void remove_HandleHintCanSubmit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PDMBLCALNPD_REMOVE_HANDLEHINTCANSUBMIT_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>*>* OAJFEAHMMOK()
		{
			return ((::R3::Observable_1<::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMBLCALNPD_OAJFEAHMMOK_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMBLCALNPD_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMBLCALNPD_DISPOSE_OFFSET))(this);
		}

		::System::Void AEGINLEIHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMBLCALNPD_AEGINLEIHGO_OFFSET))(this);
		}

		::System::Void FLJGDPKBCBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMBLCALNPD_FLJGDPKBCBB_OFFSET))(this);
		}

		::System::Void IILPELEMOJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMBLCALNPD_IILPELEMOJI_OFFSET))(this);
		}

		::System::Void __ctor_b__23_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PDMBLCALNPD___CTOR_B__23_1_OFFSET))(this, a1);
		}

	};
