#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHPNOCKFMDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA2680)
#define BHPNOCKFMDA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BAA2A00)
#define BHPNOCKFMDA_GPACOODFGAH_OFFSET UNITYSDK_OFFSET(0x1BAA2D80)
#define BHPNOCKFMDA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BAA29C0)
#define BHPNOCKFMDA_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1BAA2C20)

inline static constexpr unsigned int BHPNOCKFMDA_TypeDefinitionIndex = 80512;

	class BHPNOCKFMDA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* LAKFMBIIAAK; // 0x10
		::Entitas::IGroup_1<::NGFHCJIAOLH*>* MBBMBOMFIGF; // 0x18
		::OAIPJANPCEK* PDENFEFCAGN; // 0x20
		::System::UInt32 IAGMNMEJPMN; // 0x28
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + BHPNOCKFMDA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPNOCKFMDA_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPNOCKFMDA_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPNOCKFMDA_TEARDOWN_OFFSET))(this);
		}

		::System::Void GPACOODFGAH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BHPNOCKFMDA_GPACOODFGAH_OFFSET))(this, a1, a2);
		}

	};
