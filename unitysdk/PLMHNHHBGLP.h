#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorSpeedMultiplyReason.h"
#include "unitysdk/System/Object.h"

#define PLMHNHHBGLP_CTOR_OFFSET UNITYSDK_OFFSET(0xC303E90)
#define PLMHNHHBGLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC303F30)
#define PLMHNHHBGLP_EILOGIDBCLD_OFFSET UNITYSDK_OFFSET(0xC304130)
#define PLMHNHHBGLP_GINNHHPNLNO_OFFSET UNITYSDK_OFFSET(0xC304190)
#define PLMHNHHBGLP_OIMKLIFNCAN_OFFSET UNITYSDK_OFFSET(0xC303F80)
#define PLMHNHHBGLP_PBKLKFNKGDK_OFFSET UNITYSDK_OFFSET(0xC304210)

inline static constexpr unsigned int PLMHNHHBGLP_TypeDefinitionIndex = 57011;

	class PLMHNHHBGLP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* GPHMDJGACAN; // 0x10
		::System::Single JFAEMHPKPLI; // 0x18
		// static const ::System::Object EOOOFOPNLEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMHNHHBGLP_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMHNHHBGLP_DISPOSE_OFFSET))(this);
		}

		::System::Void OIMKLIFNCAN(::RPG::GameCore::AnimatorSpeedMultiplyReason a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorSpeedMultiplyReason, ::System::Single))((::PBYTE)hIl2Cpp + PLMHNHHBGLP_OIMKLIFNCAN_OFFSET))(this, a1, a2);
		}

		::System::Void EILOGIDBCLD(::RPG::GameCore::AnimatorSpeedMultiplyReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorSpeedMultiplyReason))((::PBYTE)hIl2Cpp + PLMHNHHBGLP_EILOGIDBCLD_OFFSET))(this, a1);
		}

		::System::Single GINNHHPNLNO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMHNHHBGLP_GINNHHPNLNO_OFFSET))(this);
		}

		::System::Void PBKLKFNKGDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMHNHHBGLP_PBKLKFNKGDK_OFFSET))(this);
		}

	};
