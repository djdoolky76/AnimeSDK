#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFHGEENHOLP;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFHGEENHOLP_BOPLBBHAPLG_OFFSET UNITYSDK_OFFSET(0xB162700)
#define BFHGEENHOLP_CCTOR_OFFSET UNITYSDK_OFFSET(0xB1628B0)
#define BFHGEENHOLP_CTOR_OFFSET UNITYSDK_OFFSET(0xB162690)
#define BFHGEENHOLP_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB162650)
#define BFHGEENHOLP_GET_TOTALSIZE_OFFSET UNITYSDK_OFFSET(0xB162670)
#define BFHGEENHOLP_NDDILBDLICD_OFFSET UNITYSDK_OFFSET(0xB162870)
#define BFHGEENHOLP_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB162660)
#define BFHGEENHOLP_SET_TOTALSIZE_OFFSET UNITYSDK_OFFSET(0xB162680)

inline static constexpr unsigned int BFHGEENHOLP_TypeDefinitionIndex = 69478;

	class BFHGEENHOLP : public ::System::Object
	{
	public:
		::System::String* JGGPGNMMKOI; // 0x10
		::System::String* CHAGHHONPJN; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* FJCAKOIDONG; // 0x28
		::System::String* DCMOCIGCIHJ; // 0x30
		::System::Int32 _TotalSize_k__BackingField; // 0x38
		static ::System::String** StaticGet_OOECCGCHLFC()
		{
			return (::System::String**)UnitySDK::FromName("", "BFHGEENHOLP")->GetStaticField(0x69DC0);
		}

		static ::BFHGEENHOLP** StaticGet_NFPNNCGHELC()
		{
			return (::BFHGEENHOLP**)UnitySDK::FromName("", "BFHGEENHOLP")->GetStaticField(0x69DC8);
		}

		static ::System::String** StaticGet_KFCGOENIDAE()
		{
			return (::System::String**)UnitySDK::FromName("", "BFHGEENHOLP")->GetStaticField(0x69DD0);
		}

		static ::System::String** StaticGet_ACGNKOKELDI()
		{
			return (::System::String**)UnitySDK::FromName("", "BFHGEENHOLP")->GetStaticField(0x69DD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHGEENHOLP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFHGEENHOLP_CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHGEENHOLP_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BFHGEENHOLP_SET_NAME_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHGEENHOLP_GET_TOTALSIZE_OFFSET))(this);
		}

		::System::Void set_TotalSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFHGEENHOLP_SET_TOTALSIZE_OFFSET))(this, a1);
		}

		static ::System::String* BOPLBBHAPLG()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BFHGEENHOLP_BOPLBBHAPLG_OFFSET))();
		}

		static ::System::Void NDDILBDLICD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFHGEENHOLP_NDDILBDLICD_OFFSET))();
		}

	};
