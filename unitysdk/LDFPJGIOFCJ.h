#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class EHBJBLKFBEA;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }

#define LDFPJGIOFCJ_AOABBMMHHKK_OFFSET UNITYSDK_OFFSET(0xB620450)
#define LDFPJGIOFCJ_BLPIAADBPPL_OFFSET UNITYSDK_OFFSET(0xB6208C0)
#define LDFPJGIOFCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB620290)
#define LDFPJGIOFCJ_FDNNLHLILGA_OFFSET UNITYSDK_OFFSET(0xB620530)
#define LDFPJGIOFCJ_FGLJJFMOMOD_OFFSET UNITYSDK_OFFSET(0xB620740)
#define LDFPJGIOFCJ_GET_CLEARSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB620260)
#define LDFPJGIOFCJ_GET_CLOSESHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB620250)
#define LDFPJGIOFCJ_GET_INITSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB620280)
#define LDFPJGIOFCJ_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB620210)
#define LDFPJGIOFCJ_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xB6201F0)
#define LDFPJGIOFCJ_GET_OPENSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB620240)
#define LDFPJGIOFCJ_GET_REFRESHSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB620270)
#define LDFPJGIOFCJ_GET_SHOPITEMS_OFFSET UNITYSDK_OFFSET(0xB620230)
#define LDFPJGIOFCJ_MMOCEGHONOB_OFFSET UNITYSDK_OFFSET(0xB6207C0)
#define LDFPJGIOFCJ_OMACHHIJIMI_OFFSET UNITYSDK_OFFSET(0xB620610)
#define LDFPJGIOFCJ_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB620220)
#define LDFPJGIOFCJ_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xB620200)

inline static constexpr unsigned int LDFPJGIOFCJ_TypeDefinitionIndex = 49727;

	class LDFPJGIOFCJ : public ::System::Object
	{
	public:
		::CEEGMMCFCBG* _CloseShopCommand_k__BackingField; // 0x10
		::CEEGMMCFCBG* _InitShopCommand_k__BackingField; // 0x18
		::CEEGMMCFCBG* _ClearShopCommand_k__BackingField; // 0x20
		::CEEGMMCFCBG* _OpenShopCommand_k__BackingField; // 0x28
		::ObservableCollections::ObservableList_1<::EHBJBLKFBEA*>* _ShopItems_k__BackingField; // 0x30
		::R3::ReactiveProperty_1<::System::Boolean>* _IsActive_k__BackingField; // 0x38
		::CEEGMMCFCBG* _RefreshShopCommand_k__BackingField; // 0x40
		::R3::ReactiveProperty_1<::System::Boolean>* _IsShow_k__BackingField; // 0x48
		// static const ::System::Object PEMKNHAAMKM; // 0x0
		// static const ::System::Object ODEBLKLGPPO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_CTOR_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsShow()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::R3::ReactiveProperty_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_SET_ISSHOW_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsActive()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::R3::ReactiveProperty_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::ObservableCollections::ObservableList_1<::EHBJBLKFBEA*>* get_ShopItems()
		{
			return ((::ObservableCollections::ObservableList_1<::EHBJBLKFBEA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_GET_SHOPITEMS_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_OpenShopCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_GET_OPENSHOPCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_CloseShopCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_GET_CLOSESHOPCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_ClearShopCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_GET_CLEARSHOPCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_RefreshShopCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_GET_REFRESHSHOPCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_InitShopCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_GET_INITSHOPCOMMAND_OFFSET))(this);
		}

		::System::Void AOABBMMHHKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_AOABBMMHHKK_OFFSET))(this);
		}

		::System::Void OMACHHIJIMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_OMACHHIJIMI_OFFSET))(this);
		}

		::System::Void FGLJJFMOMOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_FGLJJFMOMOD_OFFSET))(this);
		}

		::System::Void FDNNLHLILGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_FDNNLHLILGA_OFFSET))(this);
		}

		::System::Void BLPIAADBPPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_BLPIAADBPPL_OFFSET))(this, a1);
		}

		::System::Void MMOCEGHONOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFPJGIOFCJ_MMOCEGHONOB_OFFSET))(this);
		}

	};
