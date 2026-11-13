#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHLLDPDJBGK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPGHDGPPBJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1917E830)
#define CPGHDGPPBJH_GET_BELONGID_OFFSET UNITYSDK_OFFSET(0x1917E750)
#define CPGHDGPPBJH_GET_CASTERID_OFFSET UNITYSDK_OFFSET(0x1917E770)
#define CPGHDGPPBJH_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1917E710)
#define CPGHDGPPBJH_GET_ISWHITELISTENABLE_OFFSET UNITYSDK_OFFSET(0x1917E730)
#define CPGHDGPPBJH_GET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x1917E6F0)
#define CPGHDGPPBJH_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1917E7D0)
#define CPGHDGPPBJH_GET_SPECIALMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1917E810)
#define CPGHDGPPBJH_GET_UIEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1917E790)
#define CPGHDGPPBJH_GET_UIINDEX_OFFSET UNITYSDK_OFFSET(0x1917E7F0)
#define CPGHDGPPBJH_GET_UIMINIEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1917E7B0)
#define CPGHDGPPBJH_SET_BELONGID_OFFSET UNITYSDK_OFFSET(0x1917E760)
#define CPGHDGPPBJH_SET_CASTERID_OFFSET UNITYSDK_OFFSET(0x1917E780)
#define CPGHDGPPBJH_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1917E720)
#define CPGHDGPPBJH_SET_ISWHITELISTENABLE_OFFSET UNITYSDK_OFFSET(0x1917E740)
#define CPGHDGPPBJH_SET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x1917E700)
#define CPGHDGPPBJH_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1917E7E0)
#define CPGHDGPPBJH_SET_SPECIALMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1917E820)
#define CPGHDGPPBJH_SET_UIEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1917E7A0)
#define CPGHDGPPBJH_SET_UIINDEX_OFFSET UNITYSDK_OFFSET(0x1917E800)
#define CPGHDGPPBJH_SET_UIMINIEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1917E7C0)

inline static constexpr unsigned int CPGHDGPPBJH_TypeDefinitionIndex = 83790;

	class CPGHDGPPBJH : public ::System::Object
	{
	public:
		::System::String* _UIMiniEffectPath_k__BackingField; // 0x10
		::System::String* _UIEffectPath_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::IHLLDPDJBGK*>* _SpecialMarkParamList_k__BackingField; // 0x20
		::System::String* _ModifierName_k__BackingField; // 0x28
		::System::Int32 _UIIndex_k__BackingField; // 0x30
		::System::Int32 _Priority_k__BackingField; // 0x34
		::System::UInt32 _BelongID_k__BackingField; // 0x38
		::System::Boolean _IsEnable_k__BackingField; // 0x3C
		::System::Boolean _IsWhiteListEnable_k__BackingField; // 0x3D
		::System::Byte _padding0[0x2];
		::System::UInt32 _CasterID_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_CTOR_OFFSET))(this);
		}

		::System::String* get_ModifierName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_GET_MODIFIERNAME_OFFSET))(this);
		}

		::System::Void set_ModifierName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_SET_MODIFIERNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_SET_ISENABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWhiteListEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_GET_ISWHITELISTENABLE_OFFSET))(this);
		}

		::System::Void set_IsWhiteListEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_SET_ISWHITELISTENABLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_BelongID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_GET_BELONGID_OFFSET))(this);
		}

		::System::Void set_BelongID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_SET_BELONGID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_GET_CASTERID_OFFSET))(this);
		}

		::System::Void set_CasterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_SET_CASTERID_OFFSET))(this, a1);
		}

		::System::String* get_UIEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_GET_UIEFFECTPATH_OFFSET))(this);
		}

		::System::Void set_UIEffectPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_SET_UIEFFECTPATH_OFFSET))(this, a1);
		}

		::System::String* get_UIMiniEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_GET_UIMINIEFFECTPATH_OFFSET))(this);
		}

		::System::Void set_UIMiniEffectPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_SET_UIMINIEFFECTPATH_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::Int32 get_UIIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_GET_UIINDEX_OFFSET))(this);
		}

		::System::Void set_UIIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_SET_UIINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::IHLLDPDJBGK*>* get_SpecialMarkParamList()
		{
			return ((::System::Collections::Generic::List_1<::IHLLDPDJBGK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_GET_SPECIALMARKPARAMLIST_OFFSET))(this);
		}

		::System::Void set_SpecialMarkParamList(::System::Collections::Generic::List_1<::IHLLDPDJBGK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IHLLDPDJBGK*>*))((::PBYTE)hIl2Cpp + CPGHDGPPBJH_SET_SPECIALMARKPARAMLIST_OFFSET))(this, a1);
		}

	};
