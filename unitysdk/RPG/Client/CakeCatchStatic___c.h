#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define RPG_CLIENT_CAKECATCHSTATIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC8EFAE0)
#define RPG_CLIENT_CAKECATCHSTATIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC8EFB10)
#define RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__65_0_OFFSET UNITYSDK_OFFSET(0xC8EFB20)
#define RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__65_1_OFFSET UNITYSDK_OFFSET(0xC8EFB80)
#define RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__65_2_OFFSET UNITYSDK_OFFSET(0xC8EFBE0)
#define RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__65_3_OFFSET UNITYSDK_OFFSET(0xC8EFC40)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchStatic___c_TypeDefinitionIndex = 62972;

	class CakeCatchStatic___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x60BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __cctor_b__65_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__65_0_OFFSET))(this, a1);
		}

		::System::UInt32 __cctor_b__65_1(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__65_1_OFFSET))(this, a1);
		}

		::System::UInt32 __cctor_b__65_2(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__65_2_OFFSET))(this, a1);
		}

		::System::UInt32 __cctor_b__65_3(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__65_3_OFFSET))(this, a1);
		}

	};
}
