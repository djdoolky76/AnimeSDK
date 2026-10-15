#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBKAHIEOBEI;
class GNKHIPBNELK;
class JICKEGCLBMC;
namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPFNAKKLBIO_CIKPNFHPAFN_OFFSET UNITYSDK_OFFSET(0xBFA9EC0)
#define OPFNAKKLBIO_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA9F70)
#define OPFNAKKLBIO_GEACIEECPDM_OFFSET UNITYSDK_OFFSET(0xBFA9300)
#define OPFNAKKLBIO_GJCBAMJEGGO_OFFSET UNITYSDK_OFFSET(0xBFA9940)
#define OPFNAKKLBIO_GODCHGIMIAJ_1_OFFSET UNITYSDK_OFFSET(0xBFA9AB0)
#define OPFNAKKLBIO_GODCHGIMIAJ_OFFSET UNITYSDK_OFFSET(0xBFA99A0)
#define OPFNAKKLBIO_IKFJNLIOKJH_OFFSET UNITYSDK_OFFSET(0xBFA9150)
#define OPFNAKKLBIO_JLJMIHALBNN_OFFSET UNITYSDK_OFFSET(0xBFA9620)
#define OPFNAKKLBIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBFA90F0)
#define OPFNAKKLBIO_LFGOJFIKGON_OFFSET UNITYSDK_OFFSET(0xBFA9A00)
#define OPFNAKKLBIO_NOBJLCHIOMI_OFFSET UNITYSDK_OFFSET(0xBFA9760)

	class OPFNAKKLBIO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Version*>* BLICIKDLKOC; // 0x10
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* EFHHHMFJOOA; // 0x18
		::EBKAHIEOBEI* IAMAMIPLDBH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPFNAKKLBIO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::EBKAHIEOBEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBKAHIEOBEI*))((::PBYTE)hIl2Cpp + OPFNAKKLBIO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void IKFJNLIOKJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPFNAKKLBIO_IKFJNLIOKJH_OFFSET))(this);
		}

		::System::Void GEACIEECPDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPFNAKKLBIO_GEACIEECPDM_OFFSET))(this);
		}

		::System::Void JLJMIHALBNN(::System::Version* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + OPFNAKKLBIO_JLJMIHALBNN_OFFSET))(this, a1);
		}

		::System::Boolean GJCBAMJEGGO(::System::Version* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + OPFNAKKLBIO_GJCBAMJEGGO_OFFSET))(this, a1);
		}

		::System::Int32 NOBJLCHIOMI(::System::Version* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + OPFNAKKLBIO_NOBJLCHIOMI_OFFSET))(this, a1);
		}

		::Il2CppArray<::GNKHIPBNELK*>* GODCHGIMIAJ(::System::Version* a1, ::System::Version* a2)
		{
			return ((::Il2CppArray<::GNKHIPBNELK*>*(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + OPFNAKKLBIO_GODCHGIMIAJ_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::GNKHIPBNELK*>* GODCHGIMIAJ_1(::System::Version* a1, ::System::Version* a2, ::JICKEGCLBMC* a3)
		{
			return ((::Il2CppArray<::GNKHIPBNELK*>*(*)(::PVOID, ::System::Version*, ::System::Version*, ::JICKEGCLBMC*))((::PBYTE)hIl2Cpp + OPFNAKKLBIO_GODCHGIMIAJ_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::GNKHIPBNELK*>* CIKPNFHPAFN(::System::Version* a1, ::System::Version* a2)
		{
			return ((::Il2CppArray<::GNKHIPBNELK*>*(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + OPFNAKKLBIO_CIKPNFHPAFN_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::GNKHIPBNELK*>* LFGOJFIKGON(::System::Version* a1, ::System::Version* a2)
		{
			return ((::Il2CppArray<::GNKHIPBNELK*>*(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + OPFNAKKLBIO_LFGOJFIKGON_OFFSET))(this, a1, a2);
		}

	};
