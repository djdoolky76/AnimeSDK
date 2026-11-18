#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAKEACDMAIB.h"
#include "unitysdk/JLACGDIAFNB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BHBGDGKDAFK.h"

class AMFAHGEFDFJ;
class CCGKHPKLKKJ;
class ENLFDODLGBA;
class LJAPOEINABO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBBGKOKIDDI_EDAPGKLIKEF_OFFSET UNITYSDK_OFFSET(0x19A2FDB0)
#define DBBGKOKIDDI_FDLAPNBCAHF_OFFSET UNITYSDK_OFFSET(0x19A2FAA0)
#define DBBGKOKIDDI_KBNJKHNOMMC_OFFSET UNITYSDK_OFFSET(0x19A2F2E0)
#define DBBGKOKIDDI_KPPMGELOEBL_OFFSET UNITYSDK_OFFSET(0x19A2F820)
#define DBBGKOKIDDI_LCOMPIBAKEI_OFFSET UNITYSDK_OFFSET(0x19A30110)
#define DBBGKOKIDDI_NKFMALDILMO_OFFSET UNITYSDK_OFFSET(0x19A2FF80)
#define DBBGKOKIDDI__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A2E9A0)
#define DBBGKOKIDDI__CTOR_OFFSET UNITYSDK_OFFSET(0x19A2F210)

inline static constexpr unsigned int DBBGKOKIDDI_TypeDefinitionIndex = 85118;

class DBBGKOKIDDI : public ::System::Object
{
public:
	static ::Il2CppArray<::ENLFDODLGBA*>** StaticGet_BPGJENLIOBL()
	{
		return (::Il2CppArray<::ENLFDODLGBA*>**)Il2CppClass::FromTypeDefinitionIndex(DBBGKOKIDDI_TypeDefinitionIndex)->GetStaticField(0x37200);
	}
	::CCGKHPKLKKJ* MPPPOBNHMAI; // 0x10
	::Il2CppArray<::LJAPOEINABO*>* GIOLDLJNFOA; // 0x18
	::System::Collections::Generic::List_1<::LJAPOEINABO*>* MFJNLADLEIL; // 0x20
	::JLACGDIAFNB PEBCJMDANLO; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBBGKOKIDDI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBGKOKIDDI__CTOR_OFFSET))(this);
	}

	::System::Void KPPMGELOEBL(::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>* HIDMEFPIEKA, ::BHBGDGKDAFK& FJIPMJNNAOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>*, ::BHBGDGKDAFK&))((::PBYTE)hIl2Cpp + DBBGKOKIDDI_KPPMGELOEBL_OFFSET))(this, HIDMEFPIEKA, FJIPMJNNAOM);
	}

	::CCGKHPKLKKJ* EDAPGKLIKEF(::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>* LEEAFFCNBHJ, ::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>* BFJONIPNMBI)
	{
		return ((::CCGKHPKLKKJ*(*)(::PVOID, ::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>*, ::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>*))((::PBYTE)hIl2Cpp + DBBGKOKIDDI_EDAPGKLIKEF_OFFSET))(this, LEEAFFCNBHJ, BFJONIPNMBI);
	}

	::System::Void KBNJKHNOMMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBGKOKIDDI_KBNJKHNOMMC_OFFSET))(this);
	}

	::System::Boolean NKFMALDILMO(::AMFAHGEFDFJ* GNNEGBHJJKG)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + DBBGKOKIDDI_NKFMALDILMO_OFFSET))(this, GNNEGBHJJKG);
	}

	::System::Void LCOMPIBAKEI(::BAKEACDMAIB OBNIAHNMHPF, ::System::Boolean KMPCLKEOLAO)
	{
		return ((::System::Void(*)(::PVOID, ::BAKEACDMAIB, ::System::Boolean))((::PBYTE)hIl2Cpp + DBBGKOKIDDI_LCOMPIBAKEI_OFFSET))(this, OBNIAHNMHPF, KMPCLKEOLAO);
	}

	::System::Collections::Generic::List_1<::LJAPOEINABO*>* FDLAPNBCAHF()
	{
		return ((::System::Collections::Generic::List_1<::LJAPOEINABO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBGKOKIDDI_FDLAPNBCAHF_OFFSET))(this);
	}
};
