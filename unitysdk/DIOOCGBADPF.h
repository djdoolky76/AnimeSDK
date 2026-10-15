#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIJCAGLKGCO_eFileLoaderPosType.h"
#include "unitysdk/RPG/Client/FileVisitorPosMode.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::IO { class Stream; }

#define DIOOCGBADPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBD8A90)
#define DIOOCGBADPF_DIAOALDNCIM_1_OFFSET UNITYSDK_OFFSET(0x1EBD87B0)
#define DIOOCGBADPF_DIAOALDNCIM_OFFSET UNITYSDK_OFFSET(0x1EBD8740)
#define DIOOCGBADPF_FHJLLHCLPNP_OFFSET UNITYSDK_OFFSET(0x1EBD89B0)
#define DIOOCGBADPF_JCEBBPKPNLK_OFFSET UNITYSDK_OFFSET(0x1EBD88C0)
#define DIOOCGBADPF_KNEHEDGMFKB_OFFSET UNITYSDK_OFFSET(0x1EBD85E0)
#define DIOOCGBADPF_NDHICLCLKBH_OFFSET UNITYSDK_OFFSET(0x1EBD8A20)

inline static constexpr unsigned int DIOOCGBADPF_TypeDefinitionIndex = 35270;

	class DIOOCGBADPF : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_EOOAOBGPFKC()
		{
			return (::System::String**)UnitySDK::FromName("", "DIOOCGBADPF")->GetStaticField(0x1280);
		}

		static ::System::String** StaticGet_LCEHLLJPDBM()
		{
			return (::System::String**)UnitySDK::FromName("", "DIOOCGBADPF")->GetStaticField(0x1288);
		}

		static ::RPG::Client::FileVisitorPosMode* StaticGet_JMCNIANAFBO()
		{
			return (::RPG::Client::FileVisitorPosMode*)UnitySDK::FromName("", "DIOOCGBADPF")->GetStaticField(0x730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIOOCGBADPF_CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* KNEHEDGMFKB(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + DIOOCGBADPF_KNEHEDGMFKB_OFFSET))(a1);
		}

		static ::System::Boolean DIAOALDNCIM(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DIOOCGBADPF_DIAOALDNCIM_OFFSET))(a1);
		}

		static ::System::Boolean DIAOALDNCIM_1(::System::String* a1, ::BIJCAGLKGCO_eFileLoaderPosType a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::BIJCAGLKGCO_eFileLoaderPosType))((::PBYTE)hIl2Cpp + DIOOCGBADPF_DIAOALDNCIM_1_OFFSET))(a1, a2);
		}

		static ::System::IO::Stream* JCEBBPKPNLK(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DIOOCGBADPF_JCEBBPKPNLK_OFFSET))(a1, a2);
		}

		static ::System::IO::Stream* FHJLLHCLPNP(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DIOOCGBADPF_FHJLLHCLPNP_OFFSET))(a1, a2);
		}

		static ::System::IO::Stream* NDHICLCLKBH(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DIOOCGBADPF_NDHICLCLKBH_OFFSET))(a1, a2);
		}

	};
