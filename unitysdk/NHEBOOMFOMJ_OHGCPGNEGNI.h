#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CLPEHLLCADI;
class JJFFDGFKJAP;
class KIEHNOKNBCD;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define NHEBOOMFOMJ_OHGCPGNEGNI_HDNCNLEFFPB_OFFSET UNITYSDK_OFFSET(0x12C5FE20)
#define NHEBOOMFOMJ_OHGCPGNEGNI_IHLDBPLEPDI_OFFSET UNITYSDK_OFFSET(0x12C602B0)
#define NHEBOOMFOMJ_OHGCPGNEGNI_MIFGDOPLHOA_OFFSET UNITYSDK_OFFSET(0x12C601F0)
#define NHEBOOMFOMJ_OHGCPGNEGNI__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5FBD0)

inline static constexpr unsigned int NHEBOOMFOMJ_OHGCPGNEGNI_TypeDefinitionIndex = 92611;

class NHEBOOMFOMJ_OHGCPGNEGNI : public ::System::Object
{
public:
	// static const ::System::String* PBEHFGGBPLL; // 0x0
	::System::Collections::Generic::List_1<::JJFFDGFKJAP*>* KAHDLLFBDMF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* BOMPNJPAAFM; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* NKIDOCOCJEE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>* ADJCLMPADCB; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* KBEIECAMMOP; // 0x30
	::System::Single AJBFELPONCB; // 0x38
	::System::Int32 GMINOFFKGIL; // 0x3C
	::System::Int32 DILLONCKLIK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEBOOMFOMJ_OHGCPGNEGNI__CTOR_OFFSET))(this);
	}

	::System::Boolean HDNCNLEFFPB(::System::UInt32 FGKPNGBJBBG, ::CLPEHLLCADI* EPGPKBACODM, ::KIEHNOKNBCD* NOGPMAKCPJN, ::System::Collections::Generic::List_1<::JJFFDGFKJAP*>*& HDIAOPHNLPA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::CLPEHLLCADI*, ::KIEHNOKNBCD*, ::System::Collections::Generic::List_1<::JJFFDGFKJAP*>*&))((::PBYTE)hIl2Cpp + NHEBOOMFOMJ_OHGCPGNEGNI_HDNCNLEFFPB_OFFSET))(this, FGKPNGBJBBG, EPGPKBACODM, NOGPMAKCPJN, HDIAOPHNLPA);
	}

	::System::Boolean IHLDBPLEPDI(::DFDEIDBBGHG_1<::JJFFDGFKJAP*>* DOMIOCHBJAI, ::System::UInt32 FGKPNGBJBBG, ::JJFFDGFKJAP*& IGIMOEGCFHE)
	{
		return ((::System::Boolean(*)(::PVOID, ::DFDEIDBBGHG_1<::JJFFDGFKJAP*>*, ::System::UInt32, ::JJFFDGFKJAP*&))((::PBYTE)hIl2Cpp + NHEBOOMFOMJ_OHGCPGNEGNI_IHLDBPLEPDI_OFFSET))(this, DOMIOCHBJAI, FGKPNGBJBBG, IGIMOEGCFHE);
	}

	::System::Single MIFGDOPLHOA(::System::UInt32 FGKPNGBJBBG, ::System::Int32& NBDIGBDKKIL)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + NHEBOOMFOMJ_OHGCPGNEGNI_MIFGDOPLHOA_OFFSET))(this, FGKPNGBJBBG, NBDIGBDKKIL);
	}
};
