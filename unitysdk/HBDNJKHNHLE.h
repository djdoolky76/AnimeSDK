#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class CANFMMJEBJG;
class CHNKGINBJBI;
class CJPDCBEEOKA;
class LGPKONDDGPB;
class LJFMPPNPGAA;
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class MethodInfo; }

#define HBDNJKHNHLE_BAFNLPPPGEN_OFFSET UNITYSDK_OFFSET(0x15BEB3B0)
#define HBDNJKHNHLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BECD80)
#define HBDNJKHNHLE_CIAMCGKMPII_OFFSET UNITYSDK_OFFSET(0x15BEAA50)
#define HBDNJKHNHLE_CIOOGBIOPJA_OFFSET UNITYSDK_OFFSET(0x15BE9C20)
#define HBDNJKHNHLE_CTOR_OFFSET UNITYSDK_OFFSET(0x15BECD70)
#define HBDNJKHNHLE_DGHFNPPPMKN_OFFSET UNITYSDK_OFFSET(0x15BEBA60)
#define HBDNJKHNHLE_DJKGPDGBPOL_OFFSET UNITYSDK_OFFSET(0x15BE9C80)
#define HBDNJKHNHLE_GDFKIIPHNOM_OFFSET UNITYSDK_OFFSET(0x15BE9400)
#define HBDNJKHNHLE_GJGNDEKMKCO_OFFSET UNITYSDK_OFFSET(0x15BE8740)
#define HBDNJKHNHLE_GOMGKMGBIND_OFFSET UNITYSDK_OFFSET(0x15BE8850)
#define HBDNJKHNHLE_HIECMAFNLBD_OFFSET UNITYSDK_OFFSET(0x15BE8C50)
#define HBDNJKHNHLE_JIHHOOKALNN_OFFSET UNITYSDK_OFFSET(0x15BE9B60)
#define HBDNJKHNHLE_JIIOEMICOCE_OFFSET UNITYSDK_OFFSET(0x15BEA2E0)
#define HBDNJKHNHLE_LFFCCCALNAG_OFFSET UNITYSDK_OFFSET(0x15BEC370)
#define HBDNJKHNHLE_MADOONFBADK_OFFSET UNITYSDK_OFFSET(0x15BE9EC0)
#define HBDNJKHNHLE_NOGKFMAFCCE_OFFSET UNITYSDK_OFFSET(0x15BEA7A0)
#define HBDNJKHNHLE_OOAAKMPPGDI_OFFSET UNITYSDK_OFFSET(0x15BE8CC0)

	class HBDNJKHNHLE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::LGPKONDDGPB*>** StaticGet_MNMMMJBJEMD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::LGPKONDDGPB*>**)UnitySDK::FromName("", "HBDNJKHNHLE")->GetStaticField(0x6E340);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBDNJKHNHLE_CCTOR_OFFSET))();
		}

		static ::System::Void GJGNDEKMKCO(::System::Object* a1, ::System::Collections::Generic::IList_1<::CANFMMJEBJG*>* a2, ::System::Collections::Generic::IList_1<::CJPDCBEEOKA*>* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::IList_1<::CANFMMJEBJG*>*, ::System::Collections::Generic::IList_1<::CJPDCBEEOKA*>*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_GJGNDEKMKCO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void HIECMAFNLBD(::System::Collections::Generic::IList_1<::CANFMMJEBJG*>* a1, ::System::Collections::Generic::IList_1<::CJPDCBEEOKA*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::CANFMMJEBJG*>*, ::System::Collections::Generic::IList_1<::CJPDCBEEOKA*>*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_HIECMAFNLBD_OFFSET))(a1, a2);
		}

		static ::System::Void JIHHOOKALNN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBDNJKHNHLE_JIHHOOKALNN_OFFSET))();
		}

		static ::System::Boolean CIOOGBIOPJA(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_CIOOGBIOPJA_OFFSET))(a1);
		}

		static ::System::Void GOMGKMGBIND(::System::Object* a1, ::System::Collections::Generic::ICollection_1<::CANFMMJEBJG*>* a2, ::System::Collections::Generic::ICollection_1<::CJPDCBEEOKA*>* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::ICollection_1<::CANFMMJEBJG*>*, ::System::Collections::Generic::ICollection_1<::CJPDCBEEOKA*>*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_GOMGKMGBIND_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MADOONFBADK(::System::Object* a1, ::CHNKGINBJBI* a2, ::System::Collections::Generic::ICollection_1<::CANFMMJEBJG*>* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::CHNKGINBJBI*, ::System::Collections::Generic::ICollection_1<::CANFMMJEBJG*>*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_MADOONFBADK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JIIOEMICOCE(::System::Object* a1, ::LJFMPPNPGAA* a2, ::System::Collections::Generic::ICollection_1<::CJPDCBEEOKA*>* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::LJFMPPNPGAA*, ::System::Collections::Generic::ICollection_1<::CJPDCBEEOKA*>*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_JIIOEMICOCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean NOGKFMAFCCE(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_NOGKFMAFCCE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CIAMCGKMPII(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_CIAMCGKMPII_OFFSET))(a1, a2);
		}

		static ::System::Boolean BAFNLPPPGEN(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_BAFNLPPPGEN_OFFSET))(a1, a2);
		}

		static ::System::Boolean DJKGPDGBPOL(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_DJKGPDGBPOL_OFFSET))(a1);
		}

		static ::CANFMMJEBJG* DGHFNPPPMKN(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::Client::NotifyType a3)
		{
			return ((::CANFMMJEBJG*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_DGHFNPPPMKN_OFFSET))(a1, a2, a3);
		}

		static ::CJPDCBEEOKA* LFFCCCALNAG(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::GameCore::EventType a3, ::System::UInt32 a4)
		{
			return ((::CJPDCBEEOKA*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::GameCore::EventType, ::System::UInt32))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_LFFCCCALNAG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void OOAAKMPPGDI(::System::Collections::Generic::IList_1<::CANFMMJEBJG*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::CANFMMJEBJG*>*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_OOAAKMPPGDI_OFFSET))(a1);
		}

		static ::System::Void GDFKIIPHNOM(::System::Collections::Generic::IList_1<::CJPDCBEEOKA*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::CJPDCBEEOKA*>*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE_GDFKIIPHNOM_OFFSET))(a1);
		}

	};
