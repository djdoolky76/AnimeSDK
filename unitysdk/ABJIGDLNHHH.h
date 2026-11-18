#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileInfo.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class ILLOFHKALCJ;
class OFBDCOIKBHM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ABJIGDLNHHH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1E5D9A50)
#define ABJIGDLNHHH_EJIIMOCINOO_OFFSET UNITYSDK_OFFSET(0x1E5DA3A0)
#define ABJIGDLNHHH_GCOOAKKOIHO_OFFSET UNITYSDK_OFFSET(0x1E5DB1B0)
#define ABJIGDLNHHH_GPKHPIPCDPN_OFFSET UNITYSDK_OFFSET(0x1E5DA130)
#define ABJIGDLNHHH_HBKGDAGJLBG_OFFSET UNITYSDK_OFFSET(0x1E5DB170)
#define ABJIGDLNHHH_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1E5DB8A0)
#define ABJIGDLNHHH_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x1E5D9F00)
#define ABJIGDLNHHH_PKMKHCFIJEG_OFFSET UNITYSDK_OFFSET(0x1E5DA7E0)
#define ABJIGDLNHHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D9490)

inline static constexpr unsigned int ABJIGDLNHHH_TypeDefinitionIndex = 34087;

class ABJIGDLNHHH : public ::System::Object
{
public:
	static ::ABJIGDLNHHH** StaticGet_PMKINFHDLFD()
	{
		return (::ABJIGDLNHHH**)Il2CppClass::FromTypeDefinitionIndex(ABJIGDLNHHH_TypeDefinitionIndex)->GetStaticField(0x2A010);
	}
	::ILLOFHKALCJ* EJLGBBEBKIH; // 0x10
	::System::Collections::Generic::Dictionary_2<::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::OFBDCOIKBHM*>* IBGNHJIAJDG; // 0x18
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::System::Object*>* ENHIENKFNAH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJIGDLNHHH__CTOR_OFFSET))(this);
	}

	static ::System::Void COKNIICCODC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABJIGDLNHHH_COKNIICCODC_OFFSET))();
	}

	static ::ABJIGDLNHHH* OMPFLKCBFHF()
	{
		return ((::ABJIGDLNHHH*(*)())((::PBYTE)hIl2Cpp + ABJIGDLNHHH_OMPFLKCBFHF_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::OFBDCOIKBHM*>* GPKHPIPCDPN()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::OFBDCOIKBHM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJIGDLNHHH_GPKHPIPCDPN_OFFSET))(this);
	}

	::System::Boolean EJIIMOCINOO(::BinaryBundleLib::Runtime::BinaryBundleFileInfo JJJIFHMGFAI, ::OFBDCOIKBHM*& BGHEENCOEPJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::OFBDCOIKBHM*&))((::PBYTE)hIl2Cpp + ABJIGDLNHHH_EJIIMOCINOO_OFFSET))(this, JJJIFHMGFAI, BGHEENCOEPJ);
	}

	::System::Void PKMKHCFIJEG(::OFBDCOIKBHM* BGHEENCOEPJ)
	{
		return ((::System::Void(*)(::PVOID, ::OFBDCOIKBHM*))((::PBYTE)hIl2Cpp + ABJIGDLNHHH_PKMKHCFIJEG_OFFSET))(this, BGHEENCOEPJ);
	}

	::ILLOFHKALCJ* HBKGDAGJLBG()
	{
		return ((::ILLOFHKALCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJIGDLNHHH_HBKGDAGJLBG_OFFSET))(this);
	}

	::System::Void GCOOAKKOIHO(::OFBDCOIKBHM* BGHEENCOEPJ)
	{
		return ((::System::Void(*)(::PVOID, ::OFBDCOIKBHM*))((::PBYTE)hIl2Cpp + ABJIGDLNHHH_GCOOAKKOIHO_OFFSET))(this, BGHEENCOEPJ);
	}

	static ::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABJIGDLNHHH_LJMIPGJJELP_OFFSET))();
	}
};
