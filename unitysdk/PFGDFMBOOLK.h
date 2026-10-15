#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GroupCbType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ShaderGroupAlloc.h"

#define PFGDFMBOOLK_BFOKHKLFINI_OFFSET UNITYSDK_OFFSET(0xC20E450)
#define PFGDFMBOOLK_CCJCAOJBFNM_OFFSET UNITYSDK_OFFSET(0xC20E4D0)
#define PFGDFMBOOLK_CCTOR_OFFSET UNITYSDK_OFFSET(0xC20E960)
#define PFGDFMBOOLK_CMPMLPHHBCK_1_OFFSET UNITYSDK_OFFSET(0xC20E710)
#define PFGDFMBOOLK_CTOR_OFFSET UNITYSDK_OFFSET(0xC20E230)
#define PFGDFMBOOLK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC20E3B0)
#define PFGDFMBOOLK_GCMEFBPFHNL_OFFSET UNITYSDK_OFFSET(0xC20E810)
#define PFGDFMBOOLK_GPHPANAOFEG_OFFSET UNITYSDK_OFFSET(0xC20E340)
#define PFGDFMBOOLK_IPKICAFDKEP_OFFSET UNITYSDK_OFFSET(0xC20E400)
#define PFGDFMBOOLK_LBKPFACNNBE_OFFSET UNITYSDK_OFFSET(0xC20E5A0)

inline static constexpr unsigned int PFGDFMBOOLK_TypeDefinitionIndex = 69814;

	class PFGDFMBOOLK : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::ShaderGroupAlloc>* LKABNJCKEON; // 0x10
		::Il2CppArray<::System::Byte>* LPJCHANGGMN; // 0x18
		::Il2CppArray<::System::Int32>* DGKLFDAKMPH; // 0x20
		::System::UInt32 GMJLOINLDNE; // 0x28
		static ::System::Int32* StaticGet_LEFELAABBKO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PFGDFMBOOLK")->GetStaticField(0x15880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGDFMBOOLK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFGDFMBOOLK_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGDFMBOOLK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IPKICAFDKEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGDFMBOOLK_IPKICAFDKEP_OFFSET))(this);
		}

		::System::Boolean BFOKHKLFINI(::RPG::Client::GroupCbType a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32))((::PBYTE)hIl2Cpp + PFGDFMBOOLK_BFOKHKLFINI_OFFSET))(this, a1, a2);
		}

		::System::Void GPHPANAOFEG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFGDFMBOOLK_GPHPANAOFEG_OFFSET))(this, a1);
		}

		::System::Void CCJCAOJBFNM(::RPG::Client::GroupCbType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32))((::PBYTE)hIl2Cpp + PFGDFMBOOLK_CCJCAOJBFNM_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* LBKPFACNNBE()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGDFMBOOLK_LBKPFACNNBE_OFFSET))(this);
		}

		::System::Void CMPMLPHHBCK_1(::RPG::Client::GroupCbType a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + PFGDFMBOOLK_CMPMLPHHBCK_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GCMEFBPFHNL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFGDFMBOOLK_GCMEFBPFHNL_OFFSET))(this, a1);
		}

	};
