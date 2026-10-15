#pragma once
#include "unitysdk/unitysdk.h"
class HNLKNLJBHDD;
class IMJMDIHPJMM;
class JKKOAAANPGL;
class MOGEAODEJOD;
class OCCHJLMKMFL;
class PNGAOEKBINJ;
namespace RPG::Client::LittleGameShare::HoyoPhysics { template <typename T> class Physics2DService_1; }

#define PLMODIOCPAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C6CD0)
#define PLMODIOCPAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7C6E40)
#define PLMODIOCPAF_GET_AISERVICE_OFFSET UNITYSDK_OFFSET(0x1C7C6FC0)
#define PLMODIOCPAF_GET_INPUTSERVICE_OFFSET UNITYSDK_OFFSET(0x1C7C6FA0)
#define PLMODIOCPAF_GET_INSTANCECLIENT_OFFSET UNITYSDK_OFFSET(0x1C7C6FF0)
#define PLMODIOCPAF_GET_PHYSICS2DSERVICE_OFFSET UNITYSDK_OFFSET(0x1C7C6F80)
#define PLMODIOCPAF_GET_RANDSERVICE_OFFSET UNITYSDK_OFFSET(0x1C7C6F60)
#define PLMODIOCPAF_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0x1C7C6FE0)
#define PLMODIOCPAF_SET_AISERVICE_OFFSET UNITYSDK_OFFSET(0x1C7C6FD0)
#define PLMODIOCPAF_SET_INPUTSERVICE_OFFSET UNITYSDK_OFFSET(0x1C7C6FB0)
#define PLMODIOCPAF_SET_INSTANCECLIENT_OFFSET UNITYSDK_OFFSET(0x1C7C7000)
#define PLMODIOCPAF_SET_PHYSICS2DSERVICE_OFFSET UNITYSDK_OFFSET(0x1C7C6F90)
#define PLMODIOCPAF_SET_RANDSERVICE_OFFSET UNITYSDK_OFFSET(0x1C7C6F70)

inline static constexpr unsigned int PLMODIOCPAF_TypeDefinitionIndex = 37119;

	class PLMODIOCPAF
	{
	public:
		::RPG::Client::LittleGameShare::HoyoPhysics::Physics2DService_1<::HNLKNLJBHDD*>* _Physics2DService_k__BackingField; // 0x10
		::IMJMDIHPJMM* _AIService_k__BackingField; // 0x18
		::JKKOAAANPGL* _InstanceClient_k__BackingField; // 0x20
		::MOGEAODEJOD* EEFMDEHLLFI; // 0x28
		::OCCHJLMKMFL* _RandService_k__BackingField; // 0x30
		::PNGAOEKBINJ* _InputService_k__BackingField; // 0x38
		::System::Void _ctor(::JKKOAAANPGL* a1, ::MOGEAODEJOD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JKKOAAANPGL*, ::MOGEAODEJOD*))((::PBYTE)hIl2Cpp + PLMODIOCPAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMODIOCPAF_DISPOSE_OFFSET))(this);
		}

		::OCCHJLMKMFL* get_RandService()
		{
			return ((::OCCHJLMKMFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMODIOCPAF_GET_RANDSERVICE_OFFSET))(this);
		}

		::System::Void set_RandService(::OCCHJLMKMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCCHJLMKMFL*))((::PBYTE)hIl2Cpp + PLMODIOCPAF_SET_RANDSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::HoyoPhysics::Physics2DService_1<::HNLKNLJBHDD*>* get_Physics2DService()
		{
			return ((::RPG::Client::LittleGameShare::HoyoPhysics::Physics2DService_1<::HNLKNLJBHDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMODIOCPAF_GET_PHYSICS2DSERVICE_OFFSET))(this);
		}

		::System::Void set_Physics2DService(::RPG::Client::LittleGameShare::HoyoPhysics::Physics2DService_1<::HNLKNLJBHDD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::HoyoPhysics::Physics2DService_1<::HNLKNLJBHDD*>*))((::PBYTE)hIl2Cpp + PLMODIOCPAF_SET_PHYSICS2DSERVICE_OFFSET))(this, a1);
		}

		::PNGAOEKBINJ* get_InputService()
		{
			return ((::PNGAOEKBINJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMODIOCPAF_GET_INPUTSERVICE_OFFSET))(this);
		}

		::System::Void set_InputService(::PNGAOEKBINJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNGAOEKBINJ*))((::PBYTE)hIl2Cpp + PLMODIOCPAF_SET_INPUTSERVICE_OFFSET))(this, a1);
		}

		::IMJMDIHPJMM* get_AIService()
		{
			return ((::IMJMDIHPJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMODIOCPAF_GET_AISERVICE_OFFSET))(this);
		}

		::System::Void set_AIService(::IMJMDIHPJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMJMDIHPJMM*))((::PBYTE)hIl2Cpp + PLMODIOCPAF_SET_AISERVICE_OFFSET))(this, a1);
		}

		::MOGEAODEJOD* GHDIJCNKKOM()
		{
			return ((::MOGEAODEJOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMODIOCPAF_GHDIJCNKKOM_OFFSET))(this);
		}

		::JKKOAAANPGL* get_InstanceClient()
		{
			return ((::JKKOAAANPGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMODIOCPAF_GET_INSTANCECLIENT_OFFSET))(this);
		}

		::System::Void set_InstanceClient(::JKKOAAANPGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKKOAAANPGL*))((::PBYTE)hIl2Cpp + PLMODIOCPAF_SET_INSTANCECLIENT_OFFSET))(this, a1);
		}

	};
