#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOAKMGCGLHP;
namespace System { class Object; }

#define IOAKMGCGLHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6CA1E0)
#define IOAKMGCGLHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CA220)
#define IOAKMGCGLHP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6CA230)

inline static constexpr unsigned int IOAKMGCGLHP___c_TypeDefinitionIndex = 31903;

	class IOAKMGCGLHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOAKMGCGLHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAKMGCGLHP___C_CTOR_OFFSET))(this);
		}

		::IOAKMGCGLHP* __cctor_b__38_0()
		{
			return ((::IOAKMGCGLHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAKMGCGLHP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
