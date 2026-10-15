#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLCNOGIJGMH;
namespace System { class Object; }

#define JLCNOGIJGMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E777830)
#define JLCNOGIJGMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E777870)
#define JLCNOGIJGMH___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E777880)

inline static constexpr unsigned int JLCNOGIJGMH___c_TypeDefinitionIndex = 29977;

	class JLCNOGIJGMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLCNOGIJGMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNOGIJGMH___C_CTOR_OFFSET))(this);
		}

		::JLCNOGIJGMH* __cctor_b__63_0()
		{
			return ((::JLCNOGIJGMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNOGIJGMH___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
