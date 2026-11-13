#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNKHNOMEMFD;
namespace System { class Object; }

#define FNKHNOMEMFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202DB1D0)
#define FNKHNOMEMFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202DB210)
#define FNKHNOMEMFD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x202DB220)

inline static constexpr unsigned int FNKHNOMEMFD___c_TypeDefinitionIndex = 27171;

	class FNKHNOMEMFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FD30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNKHNOMEMFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKHNOMEMFD___C_CTOR_OFFSET))(this);
		}

		::FNKHNOMEMFD* __cctor_b__28_0()
		{
			return ((::FNKHNOMEMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKHNOMEMFD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
