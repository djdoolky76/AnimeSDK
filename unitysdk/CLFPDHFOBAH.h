#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
class CLFPDHFOBAH;
class FiveDimRenderingPanel;
namespace RPG::Client { class RPGProfilerMarkerWithIntData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLFPDHFOBAH_AFNAPKPKAFJ_OFFSET UNITYSDK_OFFSET(0xD77E540)
#define CLFPDHFOBAH_BBFLHNIABCJ_OFFSET UNITYSDK_OFFSET(0xD77D3F0)
#define CLFPDHFOBAH_CBDDEPHEOIN_OFFSET UNITYSDK_OFFSET(0xD77D460)
#define CLFPDHFOBAH_CCTOR_OFFSET UNITYSDK_OFFSET(0xD77E860)
#define CLFPDHFOBAH_CTOR_OFFSET UNITYSDK_OFFSET(0xD77CEA0)
#define CLFPDHFOBAH_DCCINFPJBOB_OFFSET UNITYSDK_OFFSET(0xD77CFF0)
#define CLFPDHFOBAH_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xD77CDE0)
#define CLFPDHFOBAH_IICBAGEMOLP_OFFSET UNITYSDK_OFFSET(0xD77CDA0)
#define CLFPDHFOBAH_JAGJDLCCOJA_OFFSET UNITYSDK_OFFSET(0xD77D110)
#define CLFPDHFOBAH_LGDKDHPDAEB_OFFSET UNITYSDK_OFFSET(0xD77E700)

inline static constexpr unsigned int CLFPDHFOBAH_TypeDefinitionIndex = 47124;

	class CLFPDHFOBAH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FiveDimRenderingPanel*>* BDHFFFGMEKK; // 0x10
		::System::Collections::Generic::List_1<::FiveDimRenderingPanel*>* KJKHBLEBBBK; // 0x18
		::System::Collections::Generic::List_1<::FiveDimRenderingPanel*>* AFMPJBBOOJB; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* KCJKPNJJEED; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* JLBGPAHBOPH; // 0x30
		::Unity::Collections::NativeArray_1<::System::Object*> ADOMICIBABN; // 0x38
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::Object*> BFMKNBNELAI; // 0x48
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Object*> MHALCIHPDNF; // 0x58
		::System::Byte _padding2[0x8];
		::System::Int32 IPOHAPPPILJ; // 0x68
		::System::Boolean AHHECCOAHEH; // 0x6C
		static ::CLFPDHFOBAH** StaticGet_EMLNOINPICJ()
		{
			return (::CLFPDHFOBAH**)UnitySDK::FromName("", "CLFPDHFOBAH")->GetStaticField(0x4B910);
		}

		static ::RPG::Client::RPGProfilerMarkerWithIntData** StaticGet_POBEBJILGKM()
		{
			return (::RPG::Client::RPGProfilerMarkerWithIntData**)UnitySDK::FromName("", "CLFPDHFOBAH")->GetStaticField(0x4B918);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFPDHFOBAH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLFPDHFOBAH_CCTOR_OFFSET))();
		}

		static ::System::Boolean IICBAGEMOLP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLFPDHFOBAH_IICBAGEMOLP_OFFSET))();
		}

		static ::CLFPDHFOBAH* GGBLHEHJBDO()
		{
			return ((::CLFPDHFOBAH*(*)())((::PBYTE)hIl2Cpp + CLFPDHFOBAH_GGBLHEHJBDO_OFFSET))();
		}

		static ::System::Void DCCINFPJBOB(::FiveDimRenderingPanel* a1)
		{
			return ((::System::Void(*)(::FiveDimRenderingPanel*))((::PBYTE)hIl2Cpp + CLFPDHFOBAH_DCCINFPJBOB_OFFSET))(a1);
		}

		static ::System::Void JAGJDLCCOJA(::FiveDimRenderingPanel* a1)
		{
			return ((::System::Void(*)(::FiveDimRenderingPanel*))((::PBYTE)hIl2Cpp + CLFPDHFOBAH_JAGJDLCCOJA_OFFSET))(a1);
		}

		static ::System::Void BBFLHNIABCJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLFPDHFOBAH_BBFLHNIABCJ_OFFSET))();
		}

		::System::Void CBDDEPHEOIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFPDHFOBAH_CBDDEPHEOIN_OFFSET))(this);
		}

		::System::Void AFNAPKPKAFJ(::System::Collections::Generic::List_1<::FiveDimRenderingPanel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FiveDimRenderingPanel*>*))((::PBYTE)hIl2Cpp + CLFPDHFOBAH_AFNAPKPKAFJ_OFFSET))(this, a1);
		}

		static ::System::Void LGDKDHPDAEB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLFPDHFOBAH_LGDKDHPDAEB_OFFSET))();
		}

	};
