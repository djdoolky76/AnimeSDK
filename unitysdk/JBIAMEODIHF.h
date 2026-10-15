#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFNLAHMAND.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/ECAOILCPKLA.h"
class DCAMGFEKEBH;
class KLIKMKFLGLG;
namespace RPG::Client::LittleGameShare { template <typename T> class RpcObjectPool_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBIAMEODIHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6C32A0)
#define JBIAMEODIHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B5020)
#define JBIAMEODIHF_FGAFJIDFFNA_OFFSET UNITYSDK_OFFSET(0x1C6B5570)
#define JBIAMEODIHF_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1C6C3260)
#define JBIAMEODIHF_OLKCPLKFFFO_OFFSET UNITYSDK_OFFSET(0x1C6B56B0)

inline static constexpr unsigned int JBIAMEODIHF_TypeDefinitionIndex = 36897;

	class JBIAMEODIHF : public ::System::Object
	{
	public:
		::KLIKMKFLGLG* FLMODBLFAGD; // 0x10
		static ::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::RuntimeTypeHandle>** StaticGet_DCELBGNCLJJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "JBIAMEODIHF")->GetStaticField(0x10200);
		}

		static ::RPG::Client::LittleGameShare::RpcObjectPool_1<::DCAMGFEKEBH*>** StaticGet_PNKEIPDJFNJ()
		{
			return (::RPG::Client::LittleGameShare::RpcObjectPool_1<::DCAMGFEKEBH*>**)UnitySDK::FromName("", "JBIAMEODIHF")->GetStaticField(0x10208);
		}

		// static const ::System::Object HNKLIJEABKG; // 0x0
		::System::Void _ctor(::KLIKMKFLGLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLIKMKFLGLG*))((::PBYTE)hIl2Cpp + JBIAMEODIHF_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBIAMEODIHF_CCTOR_OFFSET))();
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIAMEODIHF_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Boolean FGAFJIDFFNA(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + JBIAMEODIHF_FGAFJIDFFNA_OFFSET))(this, a1, a2);
		}

		::System::Void OLKCPLKFFFO(::ECAOILCPKLA a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECAOILCPKLA, ::System::UInt32))((::PBYTE)hIl2Cpp + JBIAMEODIHF_OLKCPLKFFFO_OFFSET))(this, a1, a2);
		}

	};
