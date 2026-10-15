#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CADDDIKDHBJ;
namespace System { class String; }

#define NNJOIHFDHML_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0xBCB62E0)
#define NNJOIHFDHML_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xBCB60A0)
#define NNJOIHFDHML_CHCBMKJFEBI_OFFSET UNITYSDK_OFFSET(0xBCB6260)
#define NNJOIHFDHML_CTOR_OFFSET UNITYSDK_OFFSET(0xBCB5F20)
#define NNJOIHFDHML_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCB5FB0)
#define NNJOIHFDHML_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBCB5F00)
#define NNJOIHFDHML_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBCB5EF0)
#define NNJOIHFDHML_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xBCB62C0)
#define NNJOIHFDHML_IOIMEFFNGDH_OFFSET UNITYSDK_OFFSET(0xBCB6010)
#define NNJOIHFDHML_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBCB6170)
#define NNJOIHFDHML_LGDKDHPDAEB_OFFSET UNITYSDK_OFFSET(0xBCB60E0)
#define NNJOIHFDHML_MDPPEIKIHAF_OFFSET UNITYSDK_OFFSET(0xBCB6210)
#define NNJOIHFDHML_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0xBCB6320)
#define NNJOIHFDHML_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0xBCB6360)
#define NNJOIHFDHML_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0xBCB63A0)
#define NNJOIHFDHML_SAMPLE_OFFSET UNITYSDK_OFFSET(0xBCB6400)
#define NNJOIHFDHML_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBCB5F10)
#define NNJOIHFDHML_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xBCB62D0)

inline static constexpr unsigned int NNJOIHFDHML_TypeDefinitionIndex = 74044;

	class NNJOIHFDHML : public ::System::Object
	{
	public:
		::CADDDIKDHBJ* _OwnerFMSystem_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::Single COCJDAKNIAP; // 0x20
		::System::Boolean _IsActive_k__BackingField; // 0x24
		::System::Void _ctor(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + NNJOIHFDHML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJOIHFDHML_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJOIHFDHML_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNJOIHFDHML_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJOIHFDHML_DISPOSE_OFFSET))(this);
		}

		::System::Void IOIMEFFNGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJOIHFDHML_IOIMEFFNGDH_OFFSET))(this);
		}

		::System::Void LGDKDHPDAEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJOIHFDHML_LGDKDHPDAEB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJOIHFDHML_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void MDPPEIKIHAF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNJOIHFDHML_MDPPEIKIHAF_OFFSET))(this, a1);
		}

		::System::Void CHCBMKJFEBI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNJOIHFDHML_CHCBMKJFEBI_OFFSET))(this, a1);
		}

		::CADDDIKDHBJ* get_OwnerFMSystem()
		{
			return ((::CADDDIKDHBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJOIHFDHML_GET_OWNERFMSYSTEM_OFFSET))(this);
		}

		::System::Void set_OwnerFMSystem(::CADDDIKDHBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADDDIKDHBJ*))((::PBYTE)hIl2Cpp + NNJOIHFDHML_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
		}

		::System::Boolean AutoActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJOIHFDHML_AUTOACTIVE_OFFSET))(this);
		}

		::System::String* ChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJOIHFDHML_CHANNELNAME_OFFSET))(this);
		}

		::System::Void OnChannelActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJOIHFDHML_ONCHANNELACTIVE_OFFSET))(this);
		}

		::System::Void OnChannelDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJOIHFDHML_ONCHANNELDEACTIVE_OFFSET))(this);
		}

		::System::Void OnChannelUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNJOIHFDHML_ONCHANNELUPDATE_OFFSET))(this, a1);
		}

		::System::Single Sample(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNJOIHFDHML_SAMPLE_OFFSET))(this, a1);
		}

	};
