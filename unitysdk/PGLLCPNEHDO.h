#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOJOBHMEEIH;
class DEIPGFGBEMG;
class KPCIBMMKBEG;
class NLKJJGNPCDE;
class OEIKFPLBOMH;
class PCBOLBDCNMI;
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGLLCPNEHDO_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x1EC8C810)
#define PGLLCPNEHDO_CHKLCLDDJPE_OFFSET UNITYSDK_OFFSET(0x1EC8E080)
#define PGLLCPNEHDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8F630)
#define PGLLCPNEHDO_DAAEHAEHGCA_OFFSET UNITYSDK_OFFSET(0x1EC8C290)
#define PGLLCPNEHDO_DBPKKEIPNKO_OFFSET UNITYSDK_OFFSET(0x1EC8E5F0)
#define PGLLCPNEHDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC8F370)
#define PGLLCPNEHDO_DKDANDNGONC_OFFSET UNITYSDK_OFFSET(0x1EC8C710)
#define PGLLCPNEHDO_ENBPPAIALEG_OFFSET UNITYSDK_OFFSET(0x1EC8C3B0)
#define PGLLCPNEHDO_GET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1EC8BF20)
#define PGLLCPNEHDO_GET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x1EC8BF00)
#define PGLLCPNEHDO_GET_TICKDRIVER_OFFSET UNITYSDK_OFFSET(0x1EC8BF40)
#define PGLLCPNEHDO_GLMJNKCPKGJ_1_OFFSET UNITYSDK_OFFSET(0x1EC8D690)
#define PGLLCPNEHDO_GLMJNKCPKGJ_OFFSET UNITYSDK_OFFSET(0x1EC8D5A0)
#define PGLLCPNEHDO_GMBHCNJIBPO_1_OFFSET UNITYSDK_OFFSET(0x1EC8F230)
#define PGLLCPNEHDO_GMBHCNJIBPO_OFFSET UNITYSDK_OFFSET(0x1EC8F090)
#define PGLLCPNEHDO_HFAEENCPFCK_OFFSET UNITYSDK_OFFSET(0x1EC8C070)
#define PGLLCPNEHDO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1EC8ED90)
#define PGLLCPNEHDO_JLIAPKLCOAG_OFFSET UNITYSDK_OFFSET(0x1EC8C7C0)
#define PGLLCPNEHDO_JLIBOJHDJEM_OFFSET UNITYSDK_OFFSET(0x1EC8C1B0)
#define PGLLCPNEHDO_JLKLIILODGJ_OFFSET UNITYSDK_OFFSET(0x1EC8CDB0)
#define PGLLCPNEHDO_LDGCMLMFFJN_OFFSET UNITYSDK_OFFSET(0x1EC8DB10)
#define PGLLCPNEHDO_NAFPAGCNNFJ_OFFSET UNITYSDK_OFFSET(0x1EC8C230)
#define PGLLCPNEHDO_OBBOMNBIMCL_OFFSET UNITYSDK_OFFSET(0x1EC8BF60)
#define PGLLCPNEHDO_PIMBFHLKNMF_OFFSET UNITYSDK_OFFSET(0x1EC8E340)
#define PGLLCPNEHDO_SET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1EC8BF30)
#define PGLLCPNEHDO_SET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x1EC8BF10)
#define PGLLCPNEHDO_SET_TICKDRIVER_OFFSET UNITYSDK_OFFSET(0x1EC8BF50)

inline static constexpr unsigned int PGLLCPNEHDO_TypeDefinitionIndex = 44174;

	class PGLLCPNEHDO : public ::System::Object
	{
	public:
		::BOJOBHMEEIH* _Messenger_k__BackingField; // 0x10
		::PCBOLBDCNMI* KGFHGAKBIHL; // 0x18
		::System::IDisposable* PEECNACBFMH; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::System::Object*>*>*>* JKFGIFPGLFD; // 0x28
		::NLKJJGNPCDE* _TickDriver_k__BackingField; // 0x30
		::OEIKFPLBOMH* _Logger_k__BackingField; // 0x38
		::System::Boolean GFAMGLFOMGI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_CTOR_OFFSET))(this);
		}

		::BOJOBHMEEIH* get_Messenger()
		{
			return ((::BOJOBHMEEIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_GET_MESSENGER_OFFSET))(this);
		}

		::System::Void set_Messenger(::BOJOBHMEEIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOJOBHMEEIH*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_SET_MESSENGER_OFFSET))(this, a1);
		}

		::OEIKFPLBOMH* get_Logger()
		{
			return ((::OEIKFPLBOMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_GET_LOGGER_OFFSET))(this);
		}

		::System::Void set_Logger(::OEIKFPLBOMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEIKFPLBOMH*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_SET_LOGGER_OFFSET))(this, a1);
		}

		::NLKJJGNPCDE* get_TickDriver()
		{
			return ((::NLKJJGNPCDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_GET_TICKDRIVER_OFFSET))(this);
		}

		::System::Void set_TickDriver(::NLKJJGNPCDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLKJJGNPCDE*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_SET_TICKDRIVER_OFFSET))(this, a1);
		}

		::System::Void OBBOMNBIMCL(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_OBBOMNBIMCL_OFFSET))(this, a1, a2);
		}

		::PCBOLBDCNMI* DAAEHAEHGCA()
		{
			return ((::PCBOLBDCNMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_DAAEHAEHGCA_OFFSET))(this);
		}

		::System::Void ENBPPAIALEG(::PCBOLBDCNMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCBOLBDCNMI*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_ENBPPAIALEG_OFFSET))(this, a1);
		}

		::System::Boolean JLIAPKLCOAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_JLIAPKLCOAG_OFFSET))(this);
		}

		::System::Int32 JLIBOJHDJEM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_JLIBOJHDJEM_OFFSET))(this);
		}

		::System::IDisposable* BKJGMFOKKKN(::System::Object* a1, ::DEIPGFGBEMG* a2)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Object*, ::DEIPGFGBEMG*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_BKJGMFOKKKN_OFFSET))(this, a1, a2);
		}

		::System::Void JLKLIILODGJ(::System::Object* a1, ::System::Object* a2, ::KPCIBMMKBEG* a3, ::System::Func_1<::System::Boolean>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::KPCIBMMKBEG*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_JLKLIILODGJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KPCIBMMKBEG*>* GLMJNKCPKGJ(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KPCIBMMKBEG*>*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_GLMJNKCPKGJ_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KPCIBMMKBEG*>* GLMJNKCPKGJ_1(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KPCIBMMKBEG*>*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_GLMJNKCPKGJ_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KPCIBMMKBEG*>* CHKLCLDDJPE(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::System::Object*>*>* a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KPCIBMMKBEG*>*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::System::Object*>*>*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_CHKLCLDDJPE_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* LDGCMLMFFJN(::System::Collections::Generic::IEnumerable_1<::System::Object*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_LDGCMLMFFJN_OFFSET))(a1);
		}

		static ::System::Void PIMBFHLKNMF(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Collections::Generic::List_1<::KPCIBMMKBEG*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::KPCIBMMKBEG*>*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_PIMBFHLKNMF_OFFSET))(a1, a2);
		}

		::System::Void DBPKKEIPNKO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_DBPKKEIPNKO_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GMBHCNJIBPO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_GMBHCNJIBPO_OFFSET))(this, a1);
		}

		::System::Void GMBHCNJIBPO_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_GMBHCNJIBPO_1_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_DISPOSE_OFFSET))(this);
		}

		::System::Void DKDANDNGONC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_DKDANDNGONC_OFFSET))(this, a1);
		}

		::System::Void NAFPAGCNNFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_NAFPAGCNNFJ_OFFSET))(this);
		}

		::System::Void HFAEENCPFCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_HFAEENCPFCK_OFFSET))(this);
		}

	};
