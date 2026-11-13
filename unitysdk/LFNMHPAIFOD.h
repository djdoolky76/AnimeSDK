#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LFNMHPAIFOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x18C64C20)
#define LFNMHPAIFOD_MKGBADKMKBA_OFFSET UNITYSDK_OFFSET(0x18C64B80)

inline static constexpr unsigned int LFNMHPAIFOD_TypeDefinitionIndex = 74818;

	class LFNMHPAIFOD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_CFNCOIPJCHJ()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "LFNMHPAIFOD")->GetStaticField(0x4C6A0);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_EKHLMLLCCEF()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "LFNMHPAIFOD")->GetStaticField(0x4C6A8);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_LCOIAHCPNJF()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "LFNMHPAIFOD")->GetStaticField(0x4C6B0);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_ODJIMHMIEFO()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "LFNMHPAIFOD")->GetStaticField(0x4C6B8);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_FPIGENIAMCJ()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "LFNMHPAIFOD")->GetStaticField(0x4C6C0);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_HBIMPMOAMPF()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "LFNMHPAIFOD")->GetStaticField(0x4C6C8);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_OAEDEOALAEA()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "LFNMHPAIFOD")->GetStaticField(0x4C6D0);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_EPBPOIBDALD()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "LFNMHPAIFOD")->GetStaticField(0x4C6D8);
		}

		static ::System::Boolean* StaticGet_OMIMNLGICLE()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LFNMHPAIFOD")->GetStaticField(0xE920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFNMHPAIFOD_CCTOR_OFFSET))();
		}

		static ::System::String* MKGBADKMKBA()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + LFNMHPAIFOD_MKGBADKMKBA_OFFSET))();
		}

	};
