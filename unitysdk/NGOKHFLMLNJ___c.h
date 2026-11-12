#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGOKHFLMLNJ;
namespace System { class Object; }

#define NGOKHFLMLNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE59E20)
#define NGOKHFLMLNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE59E60)
#define NGOKHFLMLNJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE59E70)

inline static constexpr unsigned int NGOKHFLMLNJ___c_TypeDefinitionIndex = 26812;

	class NGOKHFLMLNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGOKHFLMLNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ___C_CTOR_OFFSET))(this);
		}

		::NGOKHFLMLNJ* __cctor_b__23_0()
		{
			return ((::NGOKHFLMLNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
