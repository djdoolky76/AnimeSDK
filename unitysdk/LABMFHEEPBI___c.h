#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LABMFHEEPBI;
namespace System { class Object; }

#define LABMFHEEPBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC045D0)
#define LABMFHEEPBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC04610)
#define LABMFHEEPBI___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1FC04620)

inline static constexpr unsigned int LABMFHEEPBI___c_TypeDefinitionIndex = 28594;

	class LABMFHEEPBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LABMFHEEPBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABMFHEEPBI___C_CTOR_OFFSET))(this);
		}

		::LABMFHEEPBI* __cctor_b__53_0()
		{
			return ((::LABMFHEEPBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LABMFHEEPBI___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
