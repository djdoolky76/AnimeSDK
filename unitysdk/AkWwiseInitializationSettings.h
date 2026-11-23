#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonPlatformSettings.h"

class AkBasePlatformSettings;
class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKWWISEINITIALIZATIONSETTINGS_B96535D201105DDA_OFFSET UNITYSDK_OFFSET(0x290F040)
#define AKWWISEINITIALIZATIONSETTINGS_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x290EEE0)
#define AKWWISEINITIALIZATIONSETTINGS_E238674919E92198_OFFSET UNITYSDK_OFFSET(0x2910370)
#define AKWWISEINITIALIZATIONSETTINGS_E446548DFEF8A7F7_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define AKWWISEINITIALIZATIONSETTINGS_E84746986F3781FD_OFFSET UNITYSDK_OFFSET(0x29101F0)
#define AKWWISEINITIALIZATIONSETTINGS_E88F3D5670D6BAD6_OFFSET UNITYSDK_OFFSET(0x165A410)
#define AKWWISEINITIALIZATIONSETTINGS_EBEA4F5A3C3CD723_OFFSET UNITYSDK_OFFSET(0x29100D0)
#define AKWWISEINITIALIZATIONSETTINGS_F2F4D678DCDCA6F6_OFFSET UNITYSDK_OFFSET(0x290EBC0)
#define AKWWISEINITIALIZATIONSETTINGS_F4EEC9E688F62269_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define AKWWISEINITIALIZATIONSETTINGS_F5FA821676AF0AFB_OFFSET UNITYSDK_OFFSET(0x2910230)
#define AKWWISEINITIALIZATIONSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x290F130)
#define AKWWISEINITIALIZATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x290FEB0)

inline static constexpr unsigned int AkWwiseInitializationSettings_TypeDefinitionIndex = 19719;

class AkWwiseInitializationSettings : public ::AkCommonPlatformSettings
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_F1B6D77331694E74()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AkWwiseInitializationSettings_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::AkWwiseInitializationSettings** StaticGet_BEAF1D45C50F79D5()
	{
		return (::AkWwiseInitializationSettings**)Il2CppClass::FromTypeDefinitionIndex(AkWwiseInitializationSettings_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::AkBasePlatformSettings** StaticGet_FEBE2F18EE06AFE0()
	{
		return (::AkBasePlatformSettings**)Il2CppClass::FromTypeDefinitionIndex(AkWwiseInitializationSettings_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	::System::Collections::Generic::List_1<::System::String*>* PlatformSettingsNameList; // 0x18
	::System::Collections::Generic::List_1<::System::Object*>* PlatformSettingsList; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* InvalidReferencePlatforms; // 0x28
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkCommonAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::AkCommonAdvancedSettings* E88F3D5670D6BAD6()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_E88F3D5670D6BAD6_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_BF13C91AD80643D2_OFFSET))(this);
	}

	static ::AkBasePlatformSettings* F2F4D678DCDCA6F6(::System::String* BFE2A41533DE34F1)
	{
		return ((::AkBasePlatformSettings*(*)(::System::String*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_F2F4D678DCDCA6F6_OFFSET))(BFE2A41533DE34F1);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS__CTOR_OFFSET))(this);
	}

	static ::AkWwiseInitializationSettings* F5FA821676AF0AFB()
	{
		return ((::AkWwiseInitializationSettings*(*)())((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_F5FA821676AF0AFB_OFFSET))();
	}

	::System::Void B96535D201105DDA(::System::Boolean BAF8A3E3C5E8EAEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_B96535D201105DDA_OFFSET))(this, BAF8A3E3C5E8EAEF);
	}

	::System::Boolean E238674919E92198()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_E238674919E92198_OFFSET))(this);
	}

	::AkCommonCommSettings* F4EEC9E688F62269()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_F4EEC9E688F62269_OFFSET))(this);
	}

	static ::AkBasePlatformSettings* EBEA4F5A3C3CD723()
	{
		return ((::AkBasePlatformSettings*(*)())((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_EBEA4F5A3C3CD723_OFFSET))();
	}

	::AkCommonUserSettings* E446548DFEF8A7F7()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_E446548DFEF8A7F7_OFFSET))(this);
	}

	::System::Int32 E84746986F3781FD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_E84746986F3781FD_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS__CCTOR_OFFSET))();
	}
};
