#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIEOLMHJJGF;
namespace System { class Object; }

#define JIEOLMHJJGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71E9C0)
#define JIEOLMHJJGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71EA00)
#define JIEOLMHJJGF___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E71EA10)

inline static constexpr unsigned int JIEOLMHJJGF___c_TypeDefinitionIndex = 28884;

	class JIEOLMHJJGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIEOLMHJJGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEOLMHJJGF___C_CTOR_OFFSET))(this);
		}

		::JIEOLMHJJGF* __cctor_b__48_0()
		{
			return ((::JIEOLMHJJGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEOLMHJJGF___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
