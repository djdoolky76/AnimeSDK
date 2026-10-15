#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEHJKNPFDMA;
namespace System { class Object; }

#define DEHJKNPFDMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E167720)
#define DEHJKNPFDMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E167760)
#define DEHJKNPFDMA___C___CCTOR_B__51_0_OFFSET UNITYSDK_OFFSET(0x1E167770)

inline static constexpr unsigned int DEHJKNPFDMA___c_TypeDefinitionIndex = 30217;

	class DEHJKNPFDMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEHJKNPFDMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHJKNPFDMA___C_CTOR_OFFSET))(this);
		}

		::DEHJKNPFDMA* __cctor_b__51_0()
		{
			return ((::DEHJKNPFDMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHJKNPFDMA___C___CCTOR_B__51_0_OFFSET))(this);
		}

	};
