#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLHEBEDKIPC;
namespace System { class Object; }

#define JLHEBEDKIPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74BBE0)
#define JLHEBEDKIPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74BC20)
#define JLHEBEDKIPC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E74BC30)

inline static constexpr unsigned int JLHEBEDKIPC___c_TypeDefinitionIndex = 32556;

	class JLHEBEDKIPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x643B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLHEBEDKIPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHEBEDKIPC___C_CTOR_OFFSET))(this);
		}

		::JLHEBEDKIPC* __cctor_b__33_0()
		{
			return ((::JLHEBEDKIPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHEBEDKIPC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
