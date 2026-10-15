#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLBKADIKIGL;
namespace System { class Object; }

#define OLBKADIKIGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA4F60)
#define OLBKADIKIGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA4FA0)
#define OLBKADIKIGL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEA4FB0)

inline static constexpr unsigned int OLBKADIKIGL___c_TypeDefinitionIndex = 34793;

	class OLBKADIKIGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x235E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLBKADIKIGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL___C_CTOR_OFFSET))(this);
		}

		::OLBKADIKIGL* __cctor_b__23_0()
		{
			return ((::OLBKADIKIGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
