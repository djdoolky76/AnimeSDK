#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFNALNFLBIN;
class KLEFGGIHGMI;
class LJFHKAJPFNE_PBJCGMLECGD;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CFNALNFLBIN_DGHNHCGGOOC_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC53BE0)
#define CFNALNFLBIN_DGHNHCGGOOC_CFGMEFOKIEM_OFFSET UNITYSDK_OFFSET(0xCC52150)
#define CFNALNFLBIN_DGHNHCGGOOC_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC53260)
#define CFNALNFLBIN_DGHNHCGGOOC_CTOR_OFFSET UNITYSDK_OFFSET(0xCC53200)
#define CFNALNFLBIN_DGHNHCGGOOC_GET_DEBUGASSETPATH_OFFSET UNITYSDK_OFFSET(0xCC531E0)
#define CFNALNFLBIN_DGHNHCGGOOC_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xCC532D0)
#define CFNALNFLBIN_DGHNHCGGOOC_POCIFAJNIHC_OFFSET UNITYSDK_OFFSET(0xCC521E0)
#define CFNALNFLBIN_DGHNHCGGOOC_SET_DEBUGASSETPATH_OFFSET UNITYSDK_OFFSET(0xCC531F0)

inline static constexpr unsigned int CFNALNFLBIN_DGHNHCGGOOC_TypeDefinitionIndex = 73747;

	class CFNALNFLBIN_DGHNHCGGOOC : public ::System::Object
	{
	public:
		::KLEFGGIHGMI* EDOPACGLHBN; // 0x10
		::System::String* _debugAssetPath_k__BackingField; // 0x18
		::System::Action* PGGCHMMAAEO; // 0x20
		::CFNALNFLBIN* JLDECFKPLCB; // 0x28
		::System::Action_1<::System::Object*>* IMDLGFPMPEK; // 0x30
		::System::UInt32 MLKBCEMDJHH; // 0x38
		::System::UInt32 CJIHAFFEABN; // 0x3C
		::System::Int32 GLCHLIEDMIK; // 0x40
		::System::UInt32 LKKNGKHELAJ; // 0x44
		::System::Int32 FBEJCPCMAAD; // 0x48
		static ::RPG::Client::RPGProfilerMarker** StaticGet_GJIAANJKKJF()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DGHNHCGGOOC")->GetStaticField(0x21FF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNALNFLBIN_DGHNHCGGOOC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFNALNFLBIN_DGHNHCGGOOC_CCTOR_OFFSET))();
		}

		::System::String* get_debugAssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNALNFLBIN_DGHNHCGGOOC_GET_DEBUGASSETPATH_OFFSET))(this);
		}

		::System::Void set_debugAssetPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFNALNFLBIN_DGHNHCGGOOC_SET_DEBUGASSETPATH_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNALNFLBIN_DGHNHCGGOOC_CLEAR_OFFSET))(this);
		}

		::System::Void CFGMEFOKIEM(::System::String* a1, ::KLEFGGIHGMI* a2, ::System::Int32 a3, ::CFNALNFLBIN* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::KLEFGGIHGMI*, ::System::Int32, ::CFNALNFLBIN*, ::System::Action*))((::PBYTE)hIl2Cpp + CFNALNFLBIN_DGHNHCGGOOC_CFGMEFOKIEM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void POCIFAJNIHC(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CFNALNFLBIN_DGHNHCGGOOC_POCIFAJNIHC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKKFFCBJOKM(::LJFHKAJPFNE_PBJCGMLECGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE_PBJCGMLECGD*))((::PBYTE)hIl2Cpp + CFNALNFLBIN_DGHNHCGGOOC_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
