#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
#include "unitysdk/System/Object.h"
class FDLCNGPGEFP;
class HCFLAPPBPOP;
class HNOJAKKPEJM;
class JBACCAGFHON;
class JEIFBCPKIDA;
class LHGBOLGBFCF;
namespace Google::Protobuf { class IMessage; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define JEIFBCPKIDA_BCDNFGGBKPN_OFFSET UNITYSDK_OFFSET(0x16629C50)
#define JEIFBCPKIDA_BHPMIABPHNK_OFFSET UNITYSDK_OFFSET(0x16629700)
#define JEIFBCPKIDA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x166286A0)
#define JEIFBCPKIDA_CTOR_OFFSET UNITYSDK_OFFSET(0x16628820)
#define JEIFBCPKIDA_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x16628910)
#define JEIFBCPKIDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16628A60)
#define JEIFBCPKIDA_EIEONIGNJJJ_OFFSET UNITYSDK_OFFSET(0x16629E30)
#define JEIFBCPKIDA_EMLPILEJMCG_OFFSET UNITYSDK_OFFSET(0x16629400)
#define JEIFBCPKIDA_EOJGAFBFODH_OFFSET UNITYSDK_OFFSET(0x16629DE0)
#define JEIFBCPKIDA_FMDKHHILHDI_OFFSET UNITYSDK_OFFSET(0x16628F50)
#define JEIFBCPKIDA_GOFDJGDCANL_OFFSET UNITYSDK_OFFSET(0x16628A20)
#define JEIFBCPKIDA_HEFJIIPINNI_OFFSET UNITYSDK_OFFSET(0x166299B0)
#define JEIFBCPKIDA_IEOMHACOPND_OFFSET UNITYSDK_OFFSET(0x16628590)
#define JEIFBCPKIDA_KGEOECPFFMK_OFFSET UNITYSDK_OFFSET(0x16628E00)
#define JEIFBCPKIDA_MAHONJOJADA_OFFSET UNITYSDK_OFFSET(0x166295A0)
#define JEIFBCPKIDA_MDAELEMJJEC_OFFSET UNITYSDK_OFFSET(0x16628BD0)
#define JEIFBCPKIDA_NGOJFINPHKJ_OFFSET UNITYSDK_OFFSET(0x16628640)
#define JEIFBCPKIDA_NJLEENKCHNO_OFFSET UNITYSDK_OFFSET(0x16629960)
#define JEIFBCPKIDA_OEFPBEBMEFC_OFFSET UNITYSDK_OFFSET(0x16629520)
#define JEIFBCPKIDA_OODNAEEEEEM_OFFSET UNITYSDK_OFFSET(0x16629CC0)

	class JEIFBCPKIDA : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::LHGBOLGBFCF* NHJIMBADBEN; // 0x18
		::System::Collections::Generic::Queue_1<::FDLCNGPGEFP*>* DCBFDKCLGDL; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId, ::System::Collections::Generic::List_1<::HNOJAKKPEJM*>*>* DEMHFGEFLKI; // 0x28
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 IEOMHACOPND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_IEOMHACOPND_OFFSET))(this);
		}

		::System::Boolean NGOJFINPHKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_NGOJFINPHKJ_OFFSET))(this);
		}

		static ::JEIFBCPKIDA* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::JEIFBCPKIDA*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void GOFDJGDCANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_GOFDJGDCANL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_DISPOSE_OFFSET))(this);
		}

		::System::Void MDAELEMJJEC(::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId a1, ::HNOJAKKPEJM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId, ::HNOJAKKPEJM*))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_MDAELEMJJEC_OFFSET))(this, a1, a2);
		}

		::System::Void KGEOECPFFMK(::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId a1, ::HNOJAKKPEJM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId, ::HNOJAKKPEJM*))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_KGEOECPFFMK_OFFSET))(this, a1, a2);
		}

		::System::Void FMDKHHILHDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_FMDKHHILHDI_OFFSET))(this, a1);
		}

		::System::Void EMLPILEJMCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_EMLPILEJMCG_OFFSET))(this);
		}

		::System::Void MAHONJOJADA(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_MAHONJOJADA_OFFSET))(this, a1);
		}

		::System::Void BHPMIABPHNK(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_BHPMIABPHNK_OFFSET))(this, a1);
		}

		::System::Void NJLEENKCHNO(::LHGBOLGBFCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHGBOLGBFCF*))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_NJLEENKCHNO_OFFSET))(this, a1);
		}

		::System::Void HEFJIIPINNI(::System::UInt32 a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_HEFJIIPINNI_OFFSET))(this, a1, a2);
		}

		::System::Void BCDNFGGBKPN(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_BCDNFGGBKPN_OFFSET))(this, a1, a2);
		}

		::System::Void OODNAEEEEEM(::HCFLAPPBPOP* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_OODNAEEEEEM_OFFSET))(this, a1, a2);
		}

		::System::Void EOJGAFBFODH(::Google::Protobuf::IMessage* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_EOJGAFBFODH_OFFSET))(this, a1, a2);
		}

		::System::Void EIEONIGNJJJ(::Google::Protobuf::IMessage* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::UInt32))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_EIEONIGNJJJ_OFFSET))(this, a1, a2);
		}

		::FDLCNGPGEFP* OEFPBEBMEFC()
		{
			return ((::FDLCNGPGEFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIFBCPKIDA_OEFPBEBMEFC_OFFSET))(this);
		}

	};
