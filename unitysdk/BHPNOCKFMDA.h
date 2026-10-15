#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { class IGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHPNOCKFMDA_CTOR_OFFSET UNITYSDK_OFFSET(0xB493F50)
#define BHPNOCKFMDA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB4942C0)
#define BHPNOCKFMDA_GPACOODFGAH_OFFSET UNITYSDK_OFFSET(0xB494640)
#define BHPNOCKFMDA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB494280)
#define BHPNOCKFMDA_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB4944E0)

inline static constexpr unsigned int BHPNOCKFMDA_TypeDefinitionIndex = 77778;

	class BHPNOCKFMDA : public ::System::Object
	{
	public:
		::OAIPJANPCEK* PDENFEFCAGN; // 0x10
		::Entitas::IGroup* MBBMBOMFIGF; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* LAKFMBIIAAK; // 0x20
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
