#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFHPBLANIKG;
class IOAFKPDEIEA;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define IJLOPPLGLKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1805F990)
#define IJLOPPLGLKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1805F9D0)
#define IJLOPPLGLKN___C__SENDPIXAIRGETDATACSREQ_B__5_0_OFFSET UNITYSDK_OFFSET(0x1805F9E0)
#define IJLOPPLGLKN___C__SENDPIXAIRQUITSTAGECSREQ_B__9_0_OFFSET UNITYSDK_OFFSET(0x1805F9F0)

inline static constexpr unsigned int IJLOPPLGLKN___c_TypeDefinitionIndex = 81999;

	class IJLOPPLGLKN___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::BFHPBLANIKG*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::BFHPBLANIKG*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68A60);
		}

		static ::System::Action_1<::IOAFKPDEIEA*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::IOAFKPDEIEA*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68A68);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJLOPPLGLKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOPPLGLKN___C_CTOR_OFFSET))(this);
		}

		::System::Void _SendPixAirGetDataCsReq_b__5_0(::IOAFKPDEIEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOAFKPDEIEA*))((::PBYTE)hIl2Cpp + IJLOPPLGLKN___C__SENDPIXAIRGETDATACSREQ_B__5_0_OFFSET))(this, a1);
		}

		::System::Void _SendPixAirQuitStageCsReq_b__9_0(::BFHPBLANIKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFHPBLANIKG*))((::PBYTE)hIl2Cpp + IJLOPPLGLKN___C__SENDPIXAIRQUITSTAGECSREQ_B__9_0_OFFSET))(this, a1);
		}

	};
